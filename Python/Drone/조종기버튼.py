from time import sleep
from e_drone.drone import *
from e_drone.protocol import *

def eventButton(button):  # 버튼을 눌렀을 때
    print(button.button)
    #print(type(button.button))

if __name__ == '__main__':
    drone = Drone()
    drone.open('com9')    # 장치관리자에서 포트확인
    drone.setEventHandler(DataType.Button, eventButton)
    drone.sendPing(DeviceType.Controller)

    print('버튼을 입력하세요')
