import random
from time import sleep
from e_drone.drone import *
from e_drone.protocol import *

if __name__ == '__main__':

    #drone = Drone(True, True, True, True, True)
    drone = Drone()
    drone.open('com9')

    for i in range(0, 10, 1):
        
        r    = int(random.randint(0, 255))
        g    = int(random.randint(0, 255))
        b    = int(random.randint(0, 255))

        dataArray = drone.sendLightDefaultColor(LightModeDrone.BodyDimming, 1, r, g, b)
        print("{0} / {1}".format(i, convertByteArrayToString(dataArray)))

        sleep(2)
    drone.close()
