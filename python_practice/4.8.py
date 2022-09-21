# 4.8

while True :
    print("1)덧셈 2)뺄셈 3)곱셈 4)나눗셈")
    num = int(input("어떤 연산을 원하는지 번호를 입력하세요 : "))
    
    if ((num <= 0) | (num >= 5)) :
        print("잘못 입력하였습니다.")

    else :
        num1, num2 =  map (int, input('연산을 원하는 숫자 두 개를 입력하세요 : ').split())

        if (num == 1) :
            print(num1, "+", num2, "=", num1 + num2)
    
        elif (num == 2) :
            print(num1, "-", num2, "=", num1 - num2)

        elif (num == 3) :
            print(num1, "*", num2, "=", num1 * num2)

        elif (num == 4) :
            print(num1, "/", num2, "=", num1 / num2)