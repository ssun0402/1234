# 9.2

str = input("문자열을 입력하시오 : ")

str_len = len(str)

upper = []
lower = []
alphabet = []

for i in range(str_len) :
    if (str[i].isupper() == True) :
        upper.append(str[i])
    
    elif(str[i].islower() == True) :
        lower.append(str[i])

alphabet = lower + upper

print("수정된 문자열 :", end = ' ')
for i in range (len(alphabet)) :
    print(alphabet[i], end = '')