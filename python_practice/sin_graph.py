from xml.etree.ElementTree import PI
import matplotlib as plt
import numpy as np
from drawnow import *

t = np.arange(0.0, 2.0, 0.01)
y = np.sin(np.pi*2*t)

plt.grid()
plt.plot(t, y)
plt.legend('sin') # 그래프 이름
plt.show()

"""
angles = []
sines = []
cosines = []
x = 0
x = float(x)

def sin_graph() :
    plt.plot(angles, sines, label = 'sin')
    plt.plot(angles, cosines, label = 'cos')
    plt.legend("sinn")
    plt.grid()
    plt.xlabel('t(sec)')
    plt.ylabel('y')
    plt.ylim(-1, 1)
    plt.xlim(0, np.pi*2)


while True :
    x = x + 0.1*3.141592 #np.linspace(0, np.pi*2, 100)
    angles = np.append(angles, x)
    sines = np.append(sines, np.sin(x))
    cosines = np.append(cosines, np.cos(x))

    drawnow(sin_graph)

"""