# 원패턴비행 : 오른쪽-시계방향
from time import sleep
from e_drone.drone import *
from e_drone.protocol import *

def eventTrim(trim):
    print(f'{trim.roll}, {trim.pitch}, {trim.yaw}, {trim.throttle}')
    
if __name__ == '__main__':
    drone = Drone()
    drone.open('com9')

    drone.setEventHandler(DataType.Trim, eventTrim)

    drone.sendTrim(-21, -20, 0, 0)
    sleep(0.01)

    i=0
    while i<5:
        i += 1
        drone.sendRequest(DeviceType.Drone, DataType.Trim)
        sleep(0.5)

    drone.sendRequest(DeviceType.Drone, DataType.Trim)
    sleep(0.01)

    print('TakeOff')
    drone.sendTakeOff()
    sleep(0.01)

    print('Hovering')
    drone.sendControlWhile(0,0,0,0,5000)

    print("Go Start")
    drone.sendControlWhile(50,0,-50,0,8500)
    
    print("Go Stop")
    drone.sendControlWhile(0,0,0,0,1000)

    print('Landing')
    drone.sendLanding()
    sleep(0.01)
    drone.sendLanding()
    sleep(0.01)

    drone.close()
    
