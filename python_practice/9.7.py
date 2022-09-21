# 9.7

import string

src_str = string.ascii_uppercase + string.ascii_lowercase

str = input("문장을 입력하시오 : ")
num = int(input("이동시킬 칸 수를 입력하시오 : "))

for i in range (0, len(str)) :
    if (str[i].isalpha() == True) :
        n = src_str.find(str[i]) + num
        print(src_str[n], end = '')
    
    else :
        print(str[i], end = '')