# 6.8

import math

print('x1 =', end = ' ') 
x1 = int(input())
print('y1 =', end = ' ') 
y1 = int(input())
print('x2 =', end = ' ') 
x2 = int(input())
print('y2 =', end = ' ') 
y2 = int(input())

distance = math.sqrt(((x2-x1)**2) + ((y2-y1)**2))

x1 = (float(x1))
x2 = (float(x2))
y1 = (float(y1))
y2 = (float(y2))

print('(', x1, ',', y1,')', '과', '(', x2, ',', y2, ') 사이의 거리는', distance)