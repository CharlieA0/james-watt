
#ifndef MAPDATA_HXX
#define MAPDATA_HXX

class MapData {
  public:
    static constexpr float SPEED_STEP = 315.0;           // RPM
    static constexpr float STARTING_SPEED = 315.0;

    static constexpr float TORQUE_STEP = 13.5;          // Nm
    static constexpr float STARTING_TORQUE = 13.5;

    static constexpr int TORQUE_POINTS = 19;
    static constexpr int SPEED_POINTS = 19;

    static float EFF_GRID[TORQUE_POINTS][SPEED_POINTS];
};

#endif // MAPDATA_HXX

