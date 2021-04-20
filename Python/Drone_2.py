import turtle as t
import random

t.speed(5)
t.bgcolor('black')
t.color('yellow')
t.penup()

for i in range(10):
    x = random.randrange(-300, 300)
    y = random.randrange(-300, 300)

    t.goto(x,y)

    t.pendown()
    t.begin_fill()
    for i in range(5):
        t.fd(20)
        t.right(144)
    t.end_fill()

    t.penup()

