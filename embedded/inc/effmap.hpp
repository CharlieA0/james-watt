#ifndef EFFICIENCYMAP_HXX
#define EFFICIENCYMAP_HXX

class EfficiencyMap 
{
  private:
    static float interpolate_eff(const float torque, const float speed);
    static void clipEdgePoints(int& idx1, int& idx2, const int POINTS);

  public:
    static float estimate_power(const float torque, const float speed);
    static float estimate_eff(const float torque, const float speed);
    static float estimate_torque_limit(const float POWER_LIMIT, const float MAX_TORQUE, const int STEPS, const float speed); 
};


#endif // EFFICIENCYMAP_HXX
