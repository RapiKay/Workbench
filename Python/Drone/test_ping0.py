# 조종기에 Ping을 보내고, Ack 응답을 받아서 화면에 출력하는 예제입니다.
from time import sleep

from e_drone.drone import *
from e_drone.protocol import *


def eventAck(ack):
    print("eventAck()")
    print("{0} / {1} / {2:04X}".format(ack.dataType.name, ack.systemTime, ack.crc16))


if __name__ == '__main__':

    drone = Drone()
    drone.open('com9')

    # 이벤트 핸들링 함수 등록
    drone.setEventHandler(DataType.Ack, eventAck)

    # Ping 전송
    drone.sendPing(DeviceType.Controller)
    
    sleep(0.1)

    drone.close()
