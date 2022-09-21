# 4.2

num1, num2, num3 = map (int, input('세 정수를 입력하시오 : ').split())

num = []
num = [num1, num2, num3]

"""
for j in range(1, 4, 1) :
    for i in range(3, 2, -1) :
        if(mine[j] <= mine[i]) :
            max = mine[i]
            mine[i] = mine[j]
            mine[j] = max

for i in range(1, 4, 1) :
    print(mine[i], end = ' ')

"""

num.sort()
num.reverse()
print(num)