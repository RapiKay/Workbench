# 조종기조이스틱.py
from time import sleep
from e_drone.drone import *
from e_drone.protocol import *

def eventJoystick(joystick):
    print('좌:',joystick.left.x, joystick.left.y,
          '우:',joystick.right.x, joystick.right.y)

if __name__ == '__main__':
    drone = Drone()
    drone.open('com9')
    drone.setEventHandler(DataType.Joystick, eventJoystick)
    drone.sendPing(DeviceType.Controller)
    for i in range(10, 0, -1):   # 10에서 0이 될 때까지 1씩 감소
        print(i)
        sleep(1)

    drone.close()
