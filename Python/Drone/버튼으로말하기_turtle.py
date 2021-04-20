from time import sleep
from e_drone.drone import *
from e_drone.protocol import *

def eventButton(button):
    #print(button.button)
    if button.event.name == 'Down':
        if button.button == 1:
            print('좋아')
        elif button.button == 2:
            print('싫어')
        elif button.button == 4:
            print('점심 뭐 먹을까?')
        elif button.button == 8:
            print('김밥?')
        elif button.button == 16:
            print('짜장?')
        elif button.button == 32:
            print('짬뽕?')
        elif button.button == 128:
            print('햄버거?')
        elif button.button == 256:
            print('굶을래~ 다이어트 할거야!')
        
        
if __name__ == '__main__':
    drone = Drone()
    drone.open('com9')
    drone.setEventHandler(DataType.Button, eventButton)
    drone.sendPing(DeviceType.Controller)
        
