# LED 제어하기
import random
from time import sleep
from e_drone.drone import *
from e_drone.protocol import *


if __name__ == '__main__':

    #drone = Drone(True, True, True, True, True)
    drone = Drone()
    drone.open('com9')

    for i in range(1):                                        # 1:간격
        print("Red")
        drone.sendLightDefaultColor(LightModeDrone.BodyDimming, 1, 255, 0, 0)
        sleep(2)
        print("Green")
        drone.sendLightDefaultColor(LightModeDrone.BodyDimming, 1, 0, 255, 0)
        sleep(2)
        print("Blue")
        drone.sendLightDefaultColor(LightModeDrone.BodyDimming, 1, 0, 0, 255)
        sleep(2)
    drone.sendLightDefaultColor(LightModeDrone.BodyDimming, 1, 255, 0, 0)
    print("Red end")
    
    drone.close()
