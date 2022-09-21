# 9.5

s = "Korea is awesone! REALLY LOVE KOREA."
print("s =", s)

s = s[:-1]

count = 0

s = s.split()

for i in range (0, 6) :
    if ((s[i] == 'Korea') | (s[i] == 'KOREA')) :
        count = count + 1
print('Korea의 출현 횟수 :', count)