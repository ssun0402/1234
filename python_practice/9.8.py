# 9.8

import re

str = input("문장을 입력하시오 : ")

print("영문 단어 :", ' '.join(re.findall(r'\b[a-zA-Z]+\b', str)))
print("숫자 :", ' '.join(re.findall(r'\b[0-9]+\b', str)))
print("영문자 + 숫자 :", ' '.join(re.findall(r'\b[a-zA-Z]+[0-9]+\b', str)))