from time import sleep

from e_drone.drone import *
from e_drone.protocol import *


def eventButton(button):
    print("eventButton() / " +
        "Button: 0b{0:16}, Event: {1:6}".format(bin(button.button)[2:].zfill(16), button.event.name))
                    # 파이썬 문자열 앞 0으로 채우기 zfill(전체자리숫자)

if __name__ == '__main__':

    drone = Drone()
    drone.open('com9')

    # 이벤트 핸들링 함수 등록
    drone.setEventHandler(DataType.Button, eventButton)

    drone.sendPing(DeviceType.Controller)

    for i in range(100, 0, -1):
        print(i)
        sleep(1)

    drone.close()
