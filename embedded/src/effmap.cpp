#include <cmath>
#include <iostream>
#include <effmap.hpp>
#include <mapdata.hpp>

float EfficiencyMap::estimate_power(const float torque, const float speed) {

  const float eff = estimate_eff(torque, speed);
  const float mechanical_power = torque * speed;
  const float electrical_power = mechanical_power / eff;

  return electrical_power;

}

float EfficiencyMap::estimate_eff(const float torque, const float speed) {

  float eff = interpolate_eff(torque, speed);
  
  // extrapolation can produce out-of-bounds efficiencies
  eff = (eff > 1) ? 1.0 : eff;
  eff = (eff < 0) ? 0.0 : eff;

  return eff;

}

float EfficiencyMap::estimate_torque_limit(const float POWER_LIMIT, const float MAX_TORQUE, const int STEPS, const float speed) {
 
  float torque_limit;

  for (int i = STEPS - 1; i >= 0; i--) {
    
    const float torque = i * MAX_TORQUE / STEPS;
    const float power = estimate_power(torque, speed);

    if (power < POWER_LIMIT) {

      torque_limit = torque;
      break;

    }

  }

  return torque_limit;

}

// https://en.wikipedia.org/wiki/Bilinear_interpolation
// Also performs automatic extrapolation
float EfficiencyMap::interpolate_eff(const float torque, const float speed) {

  std::cout << std::endl;

  // Get the grid points around torque and speed
  int torque1_idx = floor(torque / MapData::TORQUE_STEP);
  int torque2_idx = torque1_idx + 1;
  clipEdgePoints(torque1_idx, torque2_idx, MapData::TORQUE_POINTS);

  int speed1_idx  = floor(speed / MapData::SPEED_STEP);
  int speed2_idx  = speed1_idx + 1;
  clipEdgePoints(speed1_idx, speed2_idx, MapData::SPEED_POINTS);

  const float t1 = torque1_idx * MapData::TORQUE_STEP;
  const float t2 = torque2_idx * MapData::TORQUE_STEP;
  const float s1 = speed1_idx * MapData::SPEED_STEP;
  const float s2 = speed2_idx * MapData::SPEED_STEP;

  // get values at grid points
  const float q11 = MapData::EFF_GRID[torque1_idx][speed1_idx];
  const float q12 = MapData::EFF_GRID[torque1_idx][speed2_idx];
  const float q21 = MapData::EFF_GRID[torque2_idx][speed2_idx];
  const float q22 = MapData::EFF_GRID[torque2_idx][speed2_idx];

  // alias torque and speed for calculations
  const float t = torque;
  const float s = speed;

  float estimate;
  estimate  = (q11*(t2 - t) + q21*(t - t1))*(s2 - s);  
  estimate += (q12*(t2 - t) + q22*(t - t1))*(s - s1);

  estimate /= ((t2 - t1)*(s2 - s1));   // Normalize
  
  return estimate; 

}

void EfficiencyMap::clipEdgePoints(int& idx1, int& idx2, const int POINTS) {

  if (idx2 >= POINTS) {
    idx1 = POINTS - 2;
    idx2 = POINTS - 1;
  } 
 
  if (idx1 < 0) {
    idx1 = 0;
    idx2 = 1;
  } 

}

extern "C" {

  float estimate_power_(float torque, float speed) {  
    return EfficiencyMap::estimate_power(torque, speed);
  }

  float estimate_eff_(float torque, float speed) {
    return EfficiencyMap::estimate_eff(torque, speed);
  }

  float estimate_torque_limit_(float POWER_LIMIT, float MAX_TORQUE, int STEPS, float speed) {
    return EfficiencyMap::estimate_torque_limit(POWER_LIMIT, MAX_TORQUE, STEPS, speed);
  }

}

//bool isOnGrid(const float torque, const float speed) {
//  
//  bool onGrid = true;
//  
//  const float MIN_TORQUE_POINT = STARTING_TORQUE;
//  const float MAX_TORQUE_POINT = STARTING_TORQUE + MapData::TORQUE_STEP * MapData::TORQUE_POINTS;
//  const float MIN_SPEED_POINT  = STARTING_SPEED;
//  const float MAX_SPEED_POINT  = STARTING_SPEED + MapData::SPEED_STEP * MapData::SPEED_POINTS;
//
//  if (torque < MIN_TORQUE_POINT || MAX_TORQUE_POINT < torque) {
//    onGrid = false;
//  }  
//
//  if (speed < MIN_SPEED_POINT || MAX_SPEED_POINT < speed) {
//    onGrid = false;
//  }
//
//  return onGrid;
//
//}

