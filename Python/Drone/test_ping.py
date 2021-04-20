# ping 테스트 : 조종기에 Ping을 보내고, Ack 응답을 받아서 화면에 출력하는 예제입니다.
from time import sleep

from e_drone.drone import *
from e_drone.protocol import *


if __name__ == '__main__':

    drone = Drone(False)
    drone.open('com')

    drone.sendPing(DeviceType.Controller)

    timeStart = time.time()

    while True:
        sleep(0.01)
        dataType = drone.check()

        if dataType == DataType.Ack:
            ack = drone.getData(DataType.Ack)
            print("{0} / {1} / {2:04X}".format(ack.dataType.name, ack.systemTime, ack.crc16))
            print("T: {0}".format(time.time() - timeStart))
            break;

        # 1초 동안 응답이 없을 경우 응답 확인을 빠져나감
        if time.time() > timeStart + 1:
            print("Time Over")
            break;

    drone.close()
