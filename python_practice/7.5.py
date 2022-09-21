# 7.5

list1 = ('A', 'B', 'C')
list2 = ('1', '2')

n = []

for i in list1 :
    for j in list2 :
        n.append(i + str(j))
print(n)