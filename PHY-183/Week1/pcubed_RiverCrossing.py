from vpython import *
#GlowScript 2.9 VPython

get_library('https://cdn.rawgit.com/PERLMSU/physutil/master/js/physutil.js')

scene.width = 900
scene.height = 500
scene.range = 20

#Objects
W = 20
origin = cylinder(pos=vector(0,0,0), axis=vector(0,0,5), radius=0.2, color=color.red)
water = box(pos=vector(-30,0,0), height=W, width=0, length=200, color=color.blue, opacity=0.4) 
boat = sphere(pos=vector(0,-W/2,0), radius=0.4, color=color.white)

#Parameters and Initial Conditions
sboatwater = 10

thetaindegrees = 90
thetainrad = thetaindegrees*2*pi/360

dirboat = vector(cos(thetainrad),sin(thetainrad),0)

vboatwater = sboatwater*dirboat

vwatershore = vector(5,0,0)

#Time and time step
t=0
tf=10
dt=0.01

#MotionMap/Graph
vboatwaterMotionMap = MotionMap(boat, tf, 15, markerScale=0.5, labelMarkerOrder=False, markerColor=color.orange)

#Calculation Loop
while boat.pos.y <= W/2:
    rate(100)
    
    water.pos = water.pos + vwatershore*dt
    boat.pos = boat.pos + vboatwater*dt
    
    vboatwaterMotionMap.update(t, vwatershore)
    
    t = t + dt