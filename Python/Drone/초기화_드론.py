from time import sleep
from e_drone.drone import *
from e_drone.protocol import *

def eventTrim(trim):
    print('{0},{1},{2},{3}'.format(trim.roll, trim.pitch, trim.yaw, trim.throttle))

def eventMotion(motion):
    print('eventMotion')
    print('-가속도   Accel: {0:5}, {1:5}, {2:5}'.format(motion.accelX,motion.accelY,motion.accelZ))
    print('-수평      Gyro: {0:5}, {1:5}, {2:5}'.format(motion.gyroRoll,motion.gyroPitch,motion.gyroYaw))
    print('-각속상태 Angle: {0:5}, {1:5}, {2:5}'.format(motion.angleRoll,motion.anglePitch,motion.angleYaw))

if __name__ == '__main__':
    drone = Drone()
    drone.open('com9')

    drone.setEventHandler(DataType.Trim, eventTrim)
    drone.setEventHandler(DataType.Motion, eventMotion)

    drone.sendClearBias() #가속도,기울기,각속상태,트림이 초기화
    sleep(0.01)  # 시간을 길게 하면 바로 리셋된 값이 아닌 그 이후 값이 나옴

    drone.sendRequest(DeviceType.Drone, DataType.Trim)
    sleep(0.1)
    drone.sendRequest(DeviceType.Drone, DataType.Motion)
    sleep(0.1)

    drone.close()
