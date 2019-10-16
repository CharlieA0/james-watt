
#include <iostream>
#include <mapdata.hpp>
#include <effmap.hpp>

int main() {

  std::cout << "Hello, world" << std::endl;
  std::cout << MapData::EFF_GRID[1][0] << std::endl;
  std::cout << EfficiencyMap::estimate_eff(0, 0) << std::endl;
}

