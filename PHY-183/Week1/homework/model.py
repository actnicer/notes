from visual import *

fancart = sphere(pos = vector(14.9,11.3,0), radius = 0.5, color = color.red)
vfancart = vector(5.89,0,0)

t = 0
dt = 0.1

while t < 0.6:

    fancart.pos = fancart.pos + vfancart*dt
    t = t + dt

# below is the final position of fancart and the velocity of the fancart
print(fancart.pos)
print(vfancart)

# this shows a 2d motion model