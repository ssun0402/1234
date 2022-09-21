# 4.5

import random

a = random.randint(0, 9)
b = random.randint(0, 9)
c = random.randint(0, 9)

num1, num2, num3 = map(int, input('복권번호 세 개를 입력하시오 : ').split())

print("복권 번호 1 :", a)
print("복권 번호 2 :", b)
print("복권 번호 3 :", c)

count = 0
if ((a == num1) | (a == num2) | (a == num3)) :
    count += 1
elif ((b == num1) | (b == num2) | (b == num3)) :
    count += 1
elif ((c == num1) | (c == num2) | (c == num3)) :
    count += 1

if (count == 3) :
    print("상금 1억원")
elif (count == 2) :
    print("상금 1천만원")
elif (count == 1) :
    print("상금 1만원")
else :
    print("다음 기회에...")