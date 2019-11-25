
#include <mapdata.hpp>

float MapData::EFF_GRID[TORQUE_POINTS][SPEED_POINTS] =  
{
{0.720919, 0.720919, 0.74327, 0.74327, 0.777693, 0.777693, 0.777693, 0.777693, 0.777693, 0.796699, 0.796699, 0.796699, 0.838154, 0.838154, 0.853708, 0.820661, 0.820661, 0.829637, 0.847531, 0.847531, 0.867096, 0.865646, 0.883117, 0.904047, 0.924977, 0.922437, 0.981198, 0.981198, 0.962713, 0.977229, 0.993328, 0.996151, 0.898305, 0.938085, 0.977865, 0.960773, 0.944588, 0.944588, 0.944588, 0.943131},
 {0.720919, 0.720919, 0.720919, 0.74327, 0.765622, 0.777693, 0.777693, 0.777693, 0.777693, 0.777693, 0.796699, 0.796699, 0.838154, 0.838154, 0.853708, 0.820661, 0.820661, 0.829637, 0.847531, 0.847531, 0.867096, 0.865646, 0.883117, 0.904047, 0.924977, 0.922437, 0.981198, 0.981198, 0.962713, 0.977229, 0.993328, 0.996151, 0.898305, 0.938085, 0.977865, 0.960773, 0.944588, 0.944588, 0.944588, 0.900027},
 {0.720919, 0.720919, 0.720919, 0.74327, 0.765622, 0.777693, 0.777693, 0.777693, 0.777693, 0.777693, 0.796699, 0.796699, 0.838154, 0.838154, 0.853708, 0.820661, 0.820661, 0.829637, 0.847531, 0.847531, 0.867096, 0.865646, 0.883117, 0.904047, 0.924977, 0.922437, 0.969931, 0.981198, 0.962713, 0.977229, 0.993328, 0.996151, 0.898305, 0.938085, 0.977865, 0.960773, 0.944588, 0.944588, 0.943131, 0.900027},
 {0.720919, 0.720919, 0.720919, 0.74327, 0.74327, 0.765622, 0.777693, 0.777693, 0.777693, 0.777693, 0.796699, 0.796699, 0.838154, 0.838154, 0.853708, 0.820661, 0.820661, 0.829637, 0.862149, 0.847531, 0.867096, 0.865646, 0.883117, 0.904047, 0.924977, 0.922437, 0.969931, 0.981198, 0.962713, 0.977229, 0.993328, 0.996151, 0.898305, 0.938085, 0.977865, 0.960773, 0.944588, 0.944588, 0.943131, 0.900027},
 {0.720919, 0.720919, 0.720919, 0.720919, 0.74327, 0.765622, 0.777693, 0.777693, 0.777693, 0.777693, 0.796699, 0.796699, 0.838154, 0.838154, 0.853708, 0.864176, 0.820661, 0.829637, 0.862149, 0.847531, 0.867096, 0.865646, 0.883117, 0.904047, 0.924977, 0.922437, 0.969931, 1.048959, 1.002573, 0.978117, 1.07301, 0.973097, 0.973574, 0.988059, 1.002545, 0.983395, 0.986235, 0.943131, 0.900027, 0.900027},
 {0.720919, 0.720919, 0.720919, 0.720919, 0.74327, 0.765622, 0.787974, 0.777693, 0.777693, 0.777693, 0.796699, 0.796699, 0.818557, 0.838154, 0.853708, 0.864176, 0.820661, 0.829637, 0.862149, 0.88923, 0.901955, 0.932926, 0.942801, 0.951036, 0.959271, 0.966823, 0.931698, 0.938861, 0.953771, 0.965338, 0.998507, 1.031677, 1.01645, 0.954211, 0.983601, 1.012991, 0.957657, 0.943131, 0.900027, 0.856924},
 {0.720919, 0.720919, 0.720919, 0.720919, 0.74327, 0.765622, 0.765622, 0.777693, 0.777693, 0.777693, 0.783862, 0.796699, 0.818557, 0.838154, 0.853708, 0.864176, 0.868399, 0.862614, 0.878388, 0.925054, 0.946511, 0.900568, 0.916562, 0.912773, 0.925956, 0.913552, 0.949826, 0.979983, 0.953709, 0.946989, 0.915357, 0.894634, 0.905877, 0.953013, 0.973226, 0.966515, 0.971258, 0.928613, 0.900027, 0.856924},
 {0.720919, 0.720919, 0.720919, 0.720919, 0.74327, 0.74327, 0.765622, 0.787974, 0.777693, 0.777693, 0.783862, 0.796699, 0.818557, 0.831778, 0.852794, 0.86101, 0.879025, 0.880823, 0.915114, 0.906585, 0.913048, 0.86821, 0.890323, 0.929601, 0.967342, 0.91861, 0.934466, 0.922441, 0.953366, 0.938134, 0.944575, 0.939655, 0.940171, 0.933461, 0.92675, 0.92004, 0.913329, 0.912421, 0.884672, 0.856924},
 {0.720919, 0.720919, 0.720919, 0.720919, 0.720919, 0.74327, 0.765622, 0.787974, 0.777693, 0.777693, 0.783862, 0.824982, 0.837466, 0.841413, 0.844729, 0.857844, 0.863862, 0.868523, 0.88943, 0.890382, 0.879586, 0.897375, 0.905305, 0.906271, 0.924289, 0.942307, 0.918641, 0.934112, 0.925141, 0.935332, 0.964677, 0.937415, 0.935647, 0.932146, 0.928646, 0.925145, 0.921645, 0.887614, 0.853584, 0.904383},
 {0.720919, 0.720919, 0.720919, 0.720919, 0.720919, 0.74327, 0.765622, 0.765622, 0.787974, 0.808432, 0.816512, 0.815734, 0.833458, 0.837655, 0.836664, 0.842682, 0.8487, 0.856223, 0.863747, 0.876447, 0.88867, 0.903317, 0.897424, 0.935661, 0.910472, 0.885283, 0.888702, 0.894214, 0.913411, 0.949023, 0.939775, 0.930528, 0.916013, 0.922304, 0.920164, 0.918024, 0.915883, 0.902407, 0.88893, 0.878726},
 {0.701146, 0.720919, 0.720919, 0.720919, 0.720919, 0.74327, 0.74327, 0.765622, 0.787974, 0.807497, 0.813258, 0.830779, 0.833304, 0.842376, 0.848076, 0.853335, 0.861289, 0.862808, 0.872923, 0.882787, 0.897054, 0.917941, 0.879551, 0.907973, 0.871195, 0.902698, 0.912738, 0.914351, 0.933369, 0.924122, 0.914874, 0.905626, 0.896379, 0.906887, 0.908962, 0.906822, 0.882832, 0.858815, 0.906786, 0.853069},
 {0.701146, 0.701146, 0.720919, 0.720919, 0.720919, 0.720919, 0.74327, 0.765622, 0.798013, 0.809464, 0.827634, 0.846279, 0.841731, 0.837183, 0.858297, 0.844658, 0.859366, 0.867525, 0.870942, 0.886629, 0.875878, 0.889379, 0.861678, 0.880284, 0.891156, 0.897502, 0.936747, 0.883716, 0.902528, 0.904091, 0.905655, 0.907219, 0.908783, 0.873633, 0.897761, 0.896687, 0.882936, 0.876092, 0.851657, 0.827411},
 {0.701146, 0.701146, 0.701146, 0.720919, 0.720919, 0.720919, 0.74327, 0.771261, 0.805198, 0.821439, 0.821233, 0.811268, 0.820738, 0.815361, 0.824894, 0.83598, 0.845813, 0.851601, 0.866935, 0.857962, 0.854702, 0.860818, 0.879647, 0.887588, 0.89485, 0.904972, 0.893494, 0.882016, 0.911371, 0.916765, 0.92216, 0.923723, 0.925287, 0.880274, 0.936403, 0.937096, 0.848366, 0.895768, 0.796527, 0.801754},
 {0.701146, 0.701146, 0.701146, 0.701146, 0.720919, 0.720919, 0.744508, 0.765405, 0.782758, 0.822028, 0.816513, 0.810296, 0.816106, 0.832279, 0.846041, 0.847454, 0.842047, 0.849096, 0.863046, 0.868134, 0.876871, 0.881251, 0.890797, 0.898025, 0.896399, 0.893298, 0.888525, 0.914819, 0.920213, 0.925608, 0.931002, 0.936397, 0.941792, 0.920677, 0.899045, 0.888575, 0.864915, 0.854492, 0.81987, 0.843481},
 {0.701146, 0.701146, 0.701146, 0.701146, 0.736316, 0.736316, 0.762672, 0.814498, 0.799296, 0.815563, 0.811275, 0.825005, 0.832186, 0.838055, 0.850844, 0.862219, 0.865441, 0.86533, 0.874353, 0.885515, 0.884161, 0.903672, 0.878204, 0.852736, 0.88207, 0.911404, 0.924263, 0.913935, 0.903607, 0.909002, 0.914396, 0.919791, 0.925186, 0.906912, 0.886688, 0.840054, 0.892925, 0.813216, 0.838438, 0.847233},
 {0.701146, 0.701146, 0.701146, 0.701146, 0.701146, 0.751383, 0.766304, 0.781225, 0.788258, 0.798357, 0.817474, 0.834403, 0.830907, 0.837747, 0.832746, 0.846465, 0.843867, 0.852614, 0.873446, 0.88111, 0.876144, 0.861339, 0.860975, 0.873196, 0.890048, 0.899937, 0.90368, 0.907423, 0.902724, 0.892396, 0.89779, 0.903185, 0.90858, 0.893146, 0.872625, 0.852699, 0.847615, 0.830891, 0.841761, 0.847233},
 {0.701146, 0.701146, 0.701146, 0.701146, 0.701146, 0.733829, 0.742615, 0.788602, 0.777221, 0.781151, 0.82234, 0.815755, 0.830769, 0.831938, 0.839155, 0.851375, 0.852434, 0.865249, 0.874506, 0.876704, 0.887595, 0.887832, 0.890825, 0.895674, 0.911825, 0.903497, 0.895169, 0.886841, 0.890583, 0.891512, 0.881184, 0.886579, 0.891974, 0.881747, 0.858563, 0.881375, 0.826484, 0.848794, 0.862964, 0.862964},
 {0.706649, 0.706649, 0.706649, 0.706649, 0.706649, 0.734405, 0.748071, 0.780427, 0.779368, 0.810561, 0.81169, 0.818552, 0.821574, 0.831302, 0.834173, 0.863763, 0.843351, 0.854285, 0.86778, 0.884045, 0.898332, 0.895721, 0.908516, 0.907783, 0.906975, 0.905722, 0.899342, 0.8904, 0.882072, 0.873744, 0.877487, 0.869973, 0.875368, 0.870348, 0.844501, 0.873484, 0.838187, 0.867245, 0.862964, 0.862964},
 {0.713273, 0.713273, 0.713273, 0.713273, 0.713273, 0.734982, 0.753526, 0.772253, 0.797561, 0.805488, 0.813415, 0.824532, 0.816857, 0.84141, 0.842087, 0.855969, 0.860937, 0.872391, 0.863115, 0.876409, 0.88673, 0.892166, 0.899353, 0.903007, 0.902125, 0.900872, 0.899619, 0.895802, 0.88686, 0.877918, 0.868975, 0.860647, 0.858762, 0.858949, 0.85213, 0.854297, 0.871813, 0.875178, 0.875178, 0.862964},
 {0.713273, 0.713273, 0.713273, 0.713273, 0.713273, 0.756974, 0.773793, 0.764406, 0.797448, 0.795347, 0.796493, 0.815275, 0.833543, 0.843979, 0.850196, 0.854971, 0.858447, 0.861923, 0.858451, 0.867521, 0.875815, 0.878621, 0.89019, 0.898232, 0.897276, 0.896022, 0.894769, 0.893516, 0.892262, 0.88332, 0.874377, 0.865435, 0.856493, 0.84755, 0.879635, 0.868254, 0.879452, 0.875178, 0.875178, 0.862964},
 {0.713273, 0.713273, 0.713273, 0.713273, 0.754499, 0.754499, 0.759913, 0.75656, 0.797334, 0.791988, 0.812676, 0.842672, 0.851753, 0.830793, 0.849005, 0.853419, 0.857833, 0.867819, 0.877804, 0.857383, 0.864901, 0.862446, 0.881027, 0.893456, 0.892426, 0.891172, 0.889919, 0.888666, 0.887412, 0.886159, 0.87978, 0.870837, 0.861895, 0.862136, 0.869081, 0.891204, 0.887391, 0.887391, 0.875178, 0.875178},
 {0.713273, 0.713273, 0.713273, 0.713273, 0.752025, 0.752025, 0.773164, 0.772937, 0.786303, 0.810669, 0.818775, 0.844531, 0.848169, 0.84715, 0.845841, 0.853742, 0.863207, 0.872672, 0.876494, 0.869029, 0.882933, 0.846272, 0.871864, 0.888681, 0.887576, 0.886323, 0.885069, 0.883816, 0.882563, 0.881309, 0.880056, 0.87624, 0.867297, 0.882807, 0.869572, 0.891658, 0.887391, 0.887391, 0.875178, 0.875178},
 {0.713273, 0.713273, 0.713273, 0.749551, 0.749551, 0.749551, 0.77069, 0.791829, 0.785151, 0.805722, 0.834913, 0.833366, 0.844585, 0.858638, 0.85605, 0.853648, 0.86754, 0.877005, 0.875183, 0.887245, 0.901886, 0.873956, 0.862701, 0.883905, 0.882726, 0.881473, 0.880219, 0.878966, 0.877713, 0.876459, 0.875206, 0.873953, 0.872699, 0.899194, 0.902397, 0.899604, 0.899604, 0.887391, 0.887391, 0.875178},
 {0.713273, 0.747076, 0.747076, 0.747076, 0.747076, 0.747076, 0.768216, 0.793548, 0.801963, 0.800473, 0.818442, 0.839253, 0.84719, 0.854644, 0.855764, 0.871444, 0.862298, 0.881337, 0.884906, 0.889185, 0.889306, 0.889426, 0.888577, 0.87913, 0.878226, 0.877323, 0.876419, 0.875516, 0.874612, 0.873709, 0.872806, 0.871902, 0.866399, 0.913137, 0.90745, 0.899604, 0.899604, 0.887391, 0.887391, 0.875178},
 {0.744602, 0.744602, 0.744602, 0.744602, 0.744602, 0.744602, 0.765742, 0.795268, 0.818774, 0.821558, 0.801971, 0.84514, 0.849794, 0.85065, 0.855478, 0.863961, 0.876805, 0.880888, 0.889425, 0.892436, 0.893691, 0.894947, 0.913317, 0.903808, 0.886326, 0.884022, 0.881719, 0.879415, 0.877112, 0.874809, 0.872505, 0.870202, 0.886617, 0.908624, 0.911817, 0.911817, 0.899604, 0.899604, 0.887391, 0.887391},
 {0.742128, 0.742128, 0.742128, 0.742128, 0.742128, 0.742128, 0.763267, 0.796987, 0.832803, 0.829473, 0.826144, 0.852208, 0.852399, 0.846656, 0.855193, 0.856477, 0.875228, 0.890892, 0.899216, 0.899725, 0.898596, 0.895828, 0.938056, 0.916387, 0.896614, 0.893522, 0.891219, 0.888915, 0.886612, 0.884308, 0.876337, 0.880697, 0.911811, 0.923242, 0.911817, 0.911817, 0.899604, 0.899604, 0.887391, 0.887391},
 {0.739654, 0.739654, 0.739654, 0.739654, 0.739654, 0.739654, 0.76289, 0.798706, 0.821781, 0.833224, 0.829895, 0.854884, 0.846558, 0.872139, 0.87439, 0.883195, 0.888191, 0.908169, 0.889632, 0.898578, 0.907524, 0.904786, 0.924531, 0.915913, 0.907296, 0.903416, 0.900719, 0.898415, 0.893278, 0.882473, 0.871668, 0.891182, 0.911302, 0.924031, 0.924031, 0.911817, 0.911817, 0.899604, 0.899604, 0.887391},
 {0.737179, 0.737179, 0.737179, 0.737179, 0.737179, 0.737179, 0.764609, 0.791931, 0.81076, 0.829589, 0.833646, 0.85756, 0.8804, 0.885187, 0.886475, 0.899521, 0.891262, 0.925446, 0.891058, 0.897548, 0.904037, 0.907521, 0.911005, 0.921328, 0.931651, 0.908681, 0.910218, 0.902711, 0.895203, 0.887695, 0.873457, 0.91416, 0.939034, 0.924031, 0.924031, 0.911817, 0.911817, 0.899604, 0.899604, 0.887391},
 {0.734705, 0.734705, 0.734705, 0.734705, 0.734705, 0.734705, 0.762081, 0.78091, 0.799739, 0.818568, 0.837397, 0.860193, 0.873985, 0.88505, 0.898209, 0.905432, 0.911244, 0.898347, 0.910559, 0.924684, 0.902947, 0.911365, 0.924457, 0.917483, 0.923331, 0.929178, 0.922339, 0.913631, 0.904923, 0.896215, 0.887839, 0.92924, 0.936244, 0.936244, 0.924031, 0.924031, 0.911817, 0.911817, 0.899604, 0.899604},
 {0.732231, 0.732231, 0.732231, 0.732231, 0.732231, 0.732231, 0.759324, 0.786418, 0.807969, 0.823978, 0.839987, 0.862783, 0.871756, 0.884914, 0.898072, 0.91123, 0.924388, 0.919093, 0.917515, 0.931497, 0.931089, 0.920144, 0.937909, 0.949714, 0.940858, 0.932002, 0.927588, 0.928022, 0.914541, 0.917061, 0.899984, 0.958412, 0.936244, 0.936244, 0.924031, 0.924031, 0.911817, 0.911817, 0.899604, 0.899604},
 {0.762532, 0.762532, 0.762532, 0.762532, 0.762532, 0.762532, 0.778541, 0.79455, 0.810559, 0.826568, 0.842577, 0.858461, 0.87162, 0.884778, 0.898141, 0.911504, 0.924867, 0.93823, 0.925526, 0.935659, 0.944001, 0.943798, 0.94345, 0.943101, 0.943683, 0.934827, 0.932837, 0.962097, 0.936572, 0.911047, 0.919317, 0.948457, 0.948457, 0.936244, 0.936244, 0.924031, 0.924031, 0.911817, 0.911817, 0.899604},
 {0.762532, 0.762532, 0.762532, 0.762532, 0.762532, 0.762532, 0.785433, 0.800367, 0.8153, 0.830234, 0.845167, 0.858404, 0.871641, 0.884877, 0.898114, 0.911351, 0.924588, 0.937825, 0.943922, 0.942637, 0.926418, 0.939356, 0.939015, 0.938675, 0.938164, 0.937652, 0.944263, 0.950874, 0.927559, 0.934588, 0.932966, 0.948457, 0.948457, 0.936244, 0.936244, 0.924031, 0.924031, 0.911817, 0.911817, 0.911817},
 {0.762532, 0.762532, 0.762532, 0.762532, 0.762532, 0.793401, 0.793401, 0.808334, 0.823268, 0.838201, 0.850224, 0.862247, 0.87427, 0.886293, 0.898316, 0.910945, 0.924182, 0.937419, 0.950656, 0.949614, 0.944239, 0.952295, 0.955471, 0.958647, 0.964107, 0.9429, 0.939433, 0.943953, 0.938815, 0.95415, 0.960671, 0.960671, 0.948457, 0.948457, 0.936244, 0.936244, 0.924031, 0.924031, 0.911817, 0.911817},
 {0.762532, 0.762532, 0.762532, 0.762532, 0.762532, 0.793401, 0.793401, 0.816302, 0.831235, 0.843258, 0.855281, 0.867304, 0.879327, 0.89135, 0.903373, 0.915396, 0.927418, 0.939441, 0.951464, 0.963487, 0.96206, 0.962091, 0.962123, 0.962155, 0.976155, 0.949191, 0.958823, 0.949905, 0.950413, 0.985729, 0.960671, 0.960671, 0.948457, 0.948457, 0.936244, 0.936244, 0.924031, 0.924031, 0.924031, 0.911817},
 {0.762532, 0.762532, 0.762532, 0.762532, 0.793401, 0.793401, 0.82427, 0.82427, 0.836369, 0.848469, 0.860569, 0.872668, 0.884768, 0.896868, 0.908968, 0.921067, 0.933167, 0.945267, 0.957366, 0.969466, 0.977057, 0.961627, 0.968976, 0.976324, 0.986856, 0.96471, 0.974071, 0.968632, 0.981596, 1.005967, 1.005967, 0.960671, 0.960671, 0.948457, 0.948457, 0.936244, 0.936244, 0.924031, 0.924031, 0.911817},
 {0.762532, 0.762532, 0.762532, 0.762532, 0.793401, 0.793401, 0.82427, 0.82427, 0.836369, 0.848469, 0.860569, 0.872668, 0.884768, 0.896868, 0.914946, 0.927046, 0.939146, 0.951246, 0.963345, 0.975445, 0.987545, 0.983625, 0.961195, 0.967086, 0.989023, 1.002518, 0.998822, 0.996187, 1.01146, 1.005967, 1.005967, 0.960671, 0.960671, 0.948457, 0.948457, 0.936244, 0.936244, 0.936244, 0.924031, 0.924031},
 {0.762532, 0.762532, 0.762532, 0.793401, 0.793401, 0.82427, 0.82427, 0.82427, 0.836369, 0.848469, 0.860569, 0.872668, 0.884768, 0.896868, 0.914946, 0.927046, 0.939146, 0.951246, 0.963345, 0.975445, 0.987545, 1.005623, 1.007387, 1.009151, 1.010915, 1.012362, 1.013808, 0.996187, 1.01146, 1.005967, 1.005967, 1.005967, 0.960671, 0.960671, 0.948457, 0.948457, 0.936244, 0.936244, 0.924031, 0.924031},
 {0.762532, 0.762532, 0.762532, 0.793401, 0.793401, 0.82427, 0.82427, 0.82427, 0.836369, 0.848469, 0.860569, 0.872668, 0.884768, 0.914946, 0.914946, 0.927046, 0.939146, 0.951246, 0.963345, 0.975445, 0.987545, 1.005623, 1.007387, 1.009151, 1.010915, 1.012362, 1.013808, 0.996187, 1.01146, 1.01146, 1.005967, 1.005967, 0.960671, 0.960671, 0.948457, 0.948457, 0.948457, 0.936244, 0.936244, 0.924031},
 {0.762532, 0.762532, 0.793401, 0.793401, 0.82427, 0.82427, 0.82427, 0.82427, 0.836369, 0.848469, 0.860569, 0.872668, 0.884768, 0.914946, 0.914946, 0.927046, 0.939146, 0.951246, 0.963345, 0.975445, 1.005623, 1.005623, 1.007387, 1.009151, 1.010915, 1.012362, 1.013808, 1.013808, 1.01146, 1.01146, 1.005967, 1.005967, 1.005967, 0.960671, 0.960671, 0.948457, 0.948457, 0.936244, 0.936244, 0.924031},
 {0.762532, 0.793401, 0.793401, 0.793401, 0.82427, 0.82427, 0.82427, 0.82427, 0.836369, 0.848469, 0.860569, 0.872668, 0.884768, 0.914946, 0.914946, 0.927046, 0.939146, 0.951246, 0.963345, 0.975445, 1.005623, 1.005623, 1.007387, 1.009151, 1.010915, 1.012362, 1.013808, 1.013808, 1.01146, 1.01146, 1.005967, 1.005967, 1.005967, 0.960671, 0.960671, 0.960671, 0.948457, 0.948457, 0.936244, 0.936244}
};

extern "C" {

  float get_point_(int i, int j) {
    return MapData::EFF_GRID[i][j];
  }

}

