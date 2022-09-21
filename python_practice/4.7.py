# 4.7

import random

a = random.randint(1, 100)
b = random.randint(1, 100)

print("임의의 난수 1 :", a)
print("임의의 난수 2 :", b)
print(a, '+', b, '=', end = ' ') 
sum = int(input())

if (sum == a + b) :
    print("잘했어요!!")
else :
    print("정답은", a+b, "입니다.")