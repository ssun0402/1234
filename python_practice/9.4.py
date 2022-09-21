# 9.4

a = 'ABCD'
b = '1234'

print("a =", a)
print("b =", b)

a = list(a)
b = list(b)
new_str1 = []
new_str2 = []

for i in range (0, len(a)) :
    new_str1.append(a[i] + b[i])
print('new_str1 =', ''.join(new_str1))

b = b[::-1]
for i in range (0, len(b)) :
    new_str2.append(a[i] + b[i])
print('new_str2 =', ''.join(new_str2))