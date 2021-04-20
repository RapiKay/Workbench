from time import sleep
from turtle import *
from e_drone.drone import *
from e_drone.protocol import *

def eventButton(button):
    print(button.button)
    if button.event.name == 'Down':
        if button.button == 1:
            circle(10)
        elif button.button == 2:
            circle(30)
        elif button.button == 4:
            circle(50)
        elif button.button == 8:
            circle(100)
        else:
            quit()
            
if __name__ == '__main__':
    drone = Drone()
    drone.open('com9')
    drone.setEventHandler(DataType.Button, eventButton)
    drone.sendPing(DeviceType.Controller)
        
