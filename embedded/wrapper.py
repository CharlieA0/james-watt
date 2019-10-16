
import ctypes

lib = ctypes.cdll.LoadLibrary("build/libeffmap.so")

class EfficiencyMap:
    def __init__(self):
        lib.estimate_power_.argtypes = [ctypes.c_float, ctypes.c_float]
        lib.estimate_power_.restype  = ctypes.c_float
        
        lib.estimate_eff_.argtypes = [ctypes.c_float, ctypes.c_float]
        lib.estimate_eff_.restype  = ctypes.c_float

        lib.get_point_.argtypes = [ctypes.c_int, ctypes.c_int]
        lib.get_point_.restype  = ctypes.c_float

    def hello(self):
        lib.hello_()

    def estimate_power(self, torque, speed):
        return lib.estimate_power_(torque, speed)

    def estimate_eff(self, torque, speed):
        return lib.estimate_eff_(torque, speed)



efficiency_map = EfficiencyMap()

efficiency_map.hello()

import numpy as np
import matplotlib.pyplot as plt

BUCKETS = 26
MAX_TORQUE = 270
MAX_SPEED = 6300

TORQUE_STEP = 13.5
SPEED_STEP = 315

speeds  = [ SPEED_STEP * i for i in range(-5, BUCKETS)]
torques = [TORQUE_STEP * i for i in range(-5, BUCKETS)] 

vv, tt = np.meshgrid(speeds, torques)

eff_map = np.zeros((len(speeds), len(torques)))
eff_map[:, :] = np.nan

eff_map2 = np.zeros((len(speeds), len(torques)))
eff_map2[:, :] = np.nan

for i,t in enumerate(torques):
    for j,v in enumerate(speeds):

        eff_map2[i, j] = lib.get_point_(i, j) 
        eff_map[i, j]  = efficiency_map.estimate_eff(t, v)

fig = plt.figure()
ax = fig.add_subplot(111)

pos = ax.scatter(vv, tt, c=eff_map, s=20, marker='s')

fig.colorbar(pos, ax=ax)

plt.title('Torque-Speed Efficiency Map')
plt.xlabel('Speed (RPM)')
plt.ylabel('Feedback Torque (Nm))')

plt.show()

