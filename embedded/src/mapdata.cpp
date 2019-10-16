
#include <mapdata.hpp>

float MapData::EFF_GRID[TORQUE_POINTS][SPEED_POINTS] =  
{
  {0.615437, 0.710611, 0.77113, 0.822001, 0.856114, 0.922792, 0.944727, 0.960862, 0.988884, 0.987442, 0.99799, 0.998174, 0.996599, 1.0, 0.929081, 0.763814, 0.763814, 0.763814, 0.763814},
   {0.630024, 0.738732, 0.774662, 0.835942, 0.860012, 0.891783, 0.920685, 0.959194, 0.975678, 0.970658, 0.977612, 0.960488, 0.966453, 0.962645, 0.805103, 0.880885, 0.880885, 0.880885, 0.880885},
   {0.617652, 0.744151, 0.783691, 0.816323, 0.846912, 0.860923, 0.884687, 0.916427, 0.926883, 0.952265, 0.959575, 0.971146, 0.973573, 0.962252, 0.8638, 0.895593, 0.895593, 0.895593, 0.895593},
   {0.61898, 0.728075, 0.785704, 0.807833, 0.832195, 0.86275, 0.876747, 0.887524, 0.915187, 0.929521, 0.938016, 0.930085, 0.938117, 0.914122, 0.898121, 0.972799, 0.972799, 0.972799, 0.972799},
   {0.630921, 0.743819, 0.788366, 0.814156, 0.831241, 0.855959, 0.865732, 0.885241, 0.895268, 0.901877, 0.910553, 0.947621, 0.875398, 0.919712, 0.888448, 0.776082, 0.776082, 0.776082, 0.776082},
   {0.632891, 0.694009, 0.802943, 0.81651, 0.834589, 0.847135, 0.863451, 0.86474, 0.881704, 0.90581, 0.909796, 0.930494, 0.895469, 0.883113, 0.842391, 0.824126, 0.824126, 0.824126, 0.824126},
   {0.620669, 0.708518, 0.775907, 0.812348, 0.823453, 0.845419, 0.860235, 0.876694, 0.889201, 0.896825, 0.906598, 1.0, 0.924044, 0.872552, 0.831574, 0.800835, 0.800835, 0.800835, 0.800835},
   {0.605682, 0.723645, 0.765885, 0.809042, 0.829184, 0.841156, 0.856074, 0.870483, 0.878942, 0.899727, 1.0, 0.911023, 0.822046, 0.842978, 0.804533, 0.768622, 0.768622, 0.768622, 0.768622},
   {0.645535, 0.723118, 0.771359, 0.797258, 0.827375, 0.84782, 0.862908, 0.884934, 0.906694, 0.944857, 0.980374, 0.910718, 0.841061, 0.844329, 0.776412, 0.74529, 0.74529, 0.74529, 0.74529},
   {0.649032, 0.734823, 0.771878, 0.812303, 0.83135, 0.851872, 0.862131, 0.874471, 0.872906, 0.872717, 0.849877, 0.987188, 0.855832, 0.806779, 0.77901, 0.787247, 0.787247, 0.787247, 0.787247},
   {0.65639, 0.736071, 0.777146, 0.813989, 0.837315, 0.849556, 0.862404, 0.874354, 0.88265, 0.909431, 0.896176, 0.859266, 0.864138, 0.799213, 0.803385, 0.787247, 0.787247, 0.787247, 0.787247},
   {0.65639, 0.676623, 0.776789, 0.81575, 0.853358, 0.863226, 0.879056, 0.885695, 0.88712, 0.918427, 0.908325, 0.868398, 0.852021, 0.801574, 0.832334, 0.787247, 0.787247, 0.787247, 0.787247},
   {0.65639, 0.700367, 0.803527, 0.824578, 0.852315, 0.877313, 0.888336, 0.898338, 0.910434, 0.905921, 0.896727, 0.882539, 0.828221, 0.81995, 0.832334, 0.787247, 0.787247, 0.787247, 0.787247},
   {0.65639, 0.725545, 0.803263, 0.830561, 0.878667, 0.891477, 0.901232, 0.908745, 0.922754, 0.918617, 0.885128, 0.896255, 0.830226, 0.85774, 0.832334, 0.787247, 0.787247, 0.787247, 0.787247},
   {0.65639, 0.741461, 0.801444, 0.822878, 0.867929, 0.912572, 0.919211, 0.927955, 0.94205, 0.947058, 0.920205, 0.895382, 0.868823, 0.886274, 0.832334, 0.787247, 0.787247, 0.787247, 0.787247},
   {0.65639, 0.769053, 0.799625, 0.837272, 0.826555, 0.937004, 0.942972, 0.937776, 0.950071, 0.947885, 0.942433, 0.918527, 0.916739, 0.886274, 0.832334, 0.787247, 0.787247, 0.787247, 0.787247},
   {0.65639, 0.769053, 0.823562, 0.87519, 0.869057, 0.92075, 0.955686, 0.964115, 0.958186, 0.956229, 0.957397, 0.959552, 0.937053, 0.886274, 0.832334, 0.787247, 0.787247, 0.787247, 0.787247},
   {0.65639, 0.769053, 0.839268, 0.895351, 0.910145, 0.937953, 0.999112, 0.995455, 0.971665, 0.989099, 0.9848, 0.98889, 0.953765, 0.886274, 0.832334, 0.787247, 0.787247, 0.787247, 0.787247},
   {0.65639, 0.769053, 0.863421, 0.909433, 0.955445, 0.957163, 0.978581, 1.0, 0.993292, 0.999418, 0.999367, 1.0, 0.953765, 0.886274, 0.832334, 0.787247, 0.787247, 0.787247, 0.787247}
};

extern "C" {

  float get_point_(int i, int j) {
    return MapData::EFF_GRID[i][j];
  }

}

