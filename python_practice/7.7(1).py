# 7.7(1)

fruit_list = ['banana', 'orange', 'kiwi', 'apple', 'melon']

n = []
a = []
b = []

for i in range (0, 5) :
    n.append(len(fruit_list[i]))
    max_len = max(n)

    if(len(fruit_list[i]) == max_len) :
        a.append(fruit_list[i])
print("가장 길이가 긴 문자열 :", a)

for i in range(0, 5) :
    if (len(fruit_list[i]) != max_len) :
            b.append(fruit_list[i])
print("fruit_list :", b)