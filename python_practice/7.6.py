# 7.6

str = []
str = input('문자열을 입력하세요 : ')
n = len(str)

for i in range (n+1) :
    print(str[0:i])

for i in range(n, 1, -1) :
    print(str[0:i-1])