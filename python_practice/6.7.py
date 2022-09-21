# 6.7

n = int(input('양의 정수를 입력하시오 : '))

a = 1
for i in range (1, n+1) :
    a *= i
print('factorial(', n, ') =', a)