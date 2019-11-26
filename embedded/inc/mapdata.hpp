
#ifndef MAPDATA_HXX
#define MAPDATA_HXX

class MapData {
  public:

    static constexpr int TORQUE_POINTS = 40;
    static constexpr float TORQUE_STEP = 6.75;     // Nm
    static constexpr float STARTING_TORQUE = 6.75;

    static constexpr int SPEED_POINTS  = 40;
    static constexpr float SPEED_STEP = 12.5;     // RPM
    static constexpr float STARTING_SPEED = 12.5;

    static constexpr float MAX_EFF = 1.0;
    static constexpr float MIN_EFF = 0.45;

    static float EFF_GRID[TORQUE_POINTS][SPEED_POINTS];

};

#endif // MAPDATA_HXX

