print("Start")

class Rectangle:
    count = 0

    def __init__(self, width, height):
        self.width = width
        self.height = height
        Rectangle.count += 1
                
    def calcArea(self):
        area = self.width * self.height
        return area