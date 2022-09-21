# 6.6
 
n = int(input('소수 검사를 할 정수를 입력하시오 : '))

def is_prime(n) :
    if(n < 2) :
        return False
    
    for i in range(2, n) :
        if(n % i == 0) :
            return False
    return True

print('소수인가요? :', is_prime(n))