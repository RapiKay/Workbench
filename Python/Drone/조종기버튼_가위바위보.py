import random
from time import sleep
from e_drone.drone import *
from e_drone.protocol import *

def Condition(na):
    com = random.choice([1,2,3])
    if com == 1:
        print('컴퓨터 : 가위')
    elif com == 2:
        print('컴퓨터 : 바위')
    else:
        print('컴퓨터 : 보')
    if na==1:
        if com==2:
            print('내가 졌습니다.')
        elif com==3:
            print('내가 이겼습니다.')
        else:
            print('비겼습니다.')
    elif na==2:
        if com==3:
            print('내가 졌습니다.')
        elif com==1:
            print('내가 이겼습니다.')
        else:
            print('비겼습니다.')
    else:
        if com==1:
            print('내가 졌습니다.')
        elif com==2:
            print('내가 이겼습니다.')
        else:
            print('비겼습니다.')
    print('='*30)
            
def eventButton(button):  #버튼을 눌렀을 때
    na = button.button
    if button.event.name == 'Down': # 버튼을 누르면 Down,Press,Up 값이 출력되어 3번 출력됨 
        if na == 1:
            print('나 : 가위')
        elif na == 2:
            print('나 : 바위')
        else:
            print('나 : 보')
            na = 3
    
        Condition(na)
        
#===============================================================================

if __name__ == '__main__':
    drone = Drone()
    drone.open('com9')    #장치관리자에서 포트확인  
    drone.setEventHandler(DataType.Button, eventButton)
    drone.sendPing(DeviceType.Controller)

    print('버튼을 입력하세요')
