n = int(input())
k = int(input())

s = []
for i in range(n):
    s.append(int(input()))

for i in range(n):
    for t in range(2, k + 1):
        if s[i] < t:
            break
        while s[i] % t == 0:
            s[i] = s[i] // t
        if s[i] == 1:
            break
flag = False    
for i in s:
    if i != 1:
        print("NO")
        flag = True
        break

if not flag:
    print("YES")

