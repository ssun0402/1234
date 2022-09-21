# 7.9 (완성본 x)

A = input('문자열 A를 입력하시오 : ')
B = input('문자열 B를 입력하시오 : ')

A = list(A)
B = list(B)

A_len = len(A)
B_len = len(B)
x_len = A_len - B_len

B_index = 0
count = 0
a = []

if (x_len < 0) :
    x_len = 0

for i in range(x_len, A_len) :
    if A[i] != B[B_index] :
        if A[i] == B[B_index - 1] :
            B_index = B_index
            count = count
        
        else :
            B_index = 0
            count = 0

    else :
        B_index += 1
        count += 1

if (count >= 1) :
    for j in range (A_len - count) :
        a.append(A[j])
        
else :
    for j in range (A_len) :
        a.append(A[j])

C = a + B
C_len = len(C)

# C가 배열이기 때문에 for문을 써서 배열을 없애줌.
for k in range (len(C)) :
    print(C[k], end = '')