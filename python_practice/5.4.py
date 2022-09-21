# 5.4

num = int(input('숫자를 입력하세요 : '))

for i in range(num) :
    print(" " * (num -(i+1)), end="")
    print('*' * (i+1))