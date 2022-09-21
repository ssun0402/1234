# 7.8

num = int(input('n을 입력하시오 : '))

num_list = list(range(1, num*num+1))

for i in range(num) :
    a = num_list[i*num : (i+1)*num]

    if (i % 2 == 1) :
        a.reverse()
    num_list[i*num : (i+1)*num] = a

k = 0
for i in num_list :
    print('{:4d}'.format(i), end = '')
    k += 1
    if (k % num == 0) :
        print()