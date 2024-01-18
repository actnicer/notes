from vpython import *

# object setup
road = box(pos=vec(0,0,0), size=vec(10, 1, 1))
cart = box(pos=vec(-4,0.5,0), size=vec(1, 1, 1), color=color.red, velocity=vec(0, 0, 0))

# parameters and initial conditions
cart.velocity = vec(5,0,0) # m/s

# time setuup
t =0
dt = 0.01
tf = 2

# loop to do physics 
while cart.pos.x < 4:
    rate(100)
    
    # v = d/t -> d = vt
    # update velocity based on velocity formula
    cart.pos = cart.pos + cart.velocity*dt
    
    # update time
    t = t + dt
    
# print final time (total time maybe is more correct)
print('t = ', t)