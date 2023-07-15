# 백준 9095
# 백준에 제출할 때는 한글 부분 다 지워서 제출해야 함.

T = int(input('테스트 케이스의 개수를 입력하시오 : '))

def solve(n) :
    if n == 1 :
        return 1
    elif n == 2 :
        return 2
    elif n == 3 :
        return 4
    else :
        return solve(n-1) + solve(n-2) + solve(n-3)

for i in range (T) :
    n = int(input('11보다 작은 양수를 입력하시오 : '))
    print("1, 2, 3의 합으로 나타내는 방법 : ", solve(n))