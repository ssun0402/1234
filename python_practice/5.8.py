# 5.8

while True : 
    num = input('정수를 입력하시오 : ')
    num2 = num[::-1]

    if (num == '-99') :
        print("프로그램을 종료합니다.")
        break

    elif (num == num2) :
        print(num,'은(는) 거꾸로 정수입니다.')

    else :
        print(num,'은(는) 거꾸로 정수가 아닙니다.')