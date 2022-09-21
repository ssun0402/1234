# 9.6

import re

s = "English = 89, Science = 90, Math = 92, history = 80."
print("문장 s :", s)

numbers = re.findall("\d+", s)

numbers_len = len(numbers)

sum = 0

for i in range (0, numbers_len) :
    numbers[i] = int(numbers[i])
    sum += numbers[i]
print("총점 :", sum)

average = (sum / numbers_len)
print("평균 점수 :", average)