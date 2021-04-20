from time import sleep
from turtle import *
from e_drone.drone import *
from e_drone.protocol import *

def eventJoystick(joystick):
    goto(joystick.right.x*2, joystick.right.y*2)

if __name__ == '__main__':
    drone = Drone()
    drone.open('com9')
    drone.setEventHandler(DataType.Joystick,eventJoystick)
    drone.sendPing(DeviceType.Controller)
