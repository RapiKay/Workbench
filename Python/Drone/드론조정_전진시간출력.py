from time import sleep
from e_drone.drone import *
from e_drone.protocol import *

def eventTrim(trim):
    print(f'{trim.roll}, {trim.pitch}, {trim.yaw}, {trim.throttle}')
    
if __name__ == '__main__':
    drone = Drone()
    drone.open('com9')

    drone.setEventHandler(DataType.Trim, eventTrim)

    drone.sendTrim(-20, -20, 0, 0)
    sleep(0.01)

    # 확인
    '''i=0
    while i<5:
        i += 1
        drone.sendRequest(DeviceType.Drone, DataType.Trim)
        sleep(0.5)'''

    drone.sendRequest(DeviceType.Drone, DataType.Trim)
    sleep(0.01)
    

    print('TakeOff')
    drone.sendTakeOff()
    sleep(0.01)
    for i in range(3,0,-1):
        print('{0}'.format(i))
        sleep(1)

    print('Hovering')
    for i in range(1,0,-1):
        print('{0}'.format(i))
        drone.sendControlWhile(0,0,0,0,1000)
        sleep(1)
        
    print('Go Start')
    drone.sendControlWhile(0,50,0,0,1000)
    for i in range(1,0,-1):
        print('{0}'.format(i))
        sleep(1)

    print('Go Stop')
    drone.sendControlWhile(0,0,0,0,1000)
    for i in range(1,0,-1):
        print('{0}'.format(i))
        sleep(1)

    print('Landing')
    drone.sendLanding()
    sleep(0.01)
    drone.close
