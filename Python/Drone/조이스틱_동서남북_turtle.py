from time import sleep
from e_drone.drone import *
from e_drone.protocol import *

def eventJoystick(joystick):
    if joystick.right.x > 30 and abs(joystick.right.y) < 10:
        print('동')
    elif joystick.right.x < -30  and abs(joystick.right.y) < 10:
        print('서')
    elif joystick.right.y > 30  and abs(joystick.right.x) < 10:
        print('북')
    elif joystick.right.y < -30  and abs(joystick.right.x) < 10:
        print('남')
    

if __name__ == '__main__':
    drone = Drone()
    drone.open('com9')
    drone.setEventHandler(DataType.Joystick,eventJoystick)
    drone.sendPing(DeviceType.Controller)
