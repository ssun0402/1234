# 5.9

num1 = []

count = 0

while True :
    num = int(input('정수를 입력하시오 : '))

    if (num == -99) :
        break

    else :
        num1.append(num)
        count += 1

num1.sort()
num1.reverse()

print(count, '개의 유효한 정수중 가장 큰 정수는', num1[0], '이고, 가장 작은 정수는', num1[count-1], '입니다.')