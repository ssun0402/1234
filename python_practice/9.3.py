# 9.3

str = input("문자열을 입력하시오 : ")
print("대문자, 소문자, 숫자, 특수문자의 개수")

str_len = len(str)

Alp_count = 0
alp_count = 0
num_count = 0
symbol_count = 0

for i in range(str_len) :
    if (str[i].isupper() == True) :
        Alp_count += 1
    
    elif (str[i].islower() == True) :
        alp_count += 1
    
    elif (str[i].isdecimal() == True) :
        num_count += 1

    else :
        symbol_count += 1

print("대문자 =", Alp_count)
print("소문자 =", alp_count)
print("숫자 =", num_count)
print("특수문자 =", symbol_count)