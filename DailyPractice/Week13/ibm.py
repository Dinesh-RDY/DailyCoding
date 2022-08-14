arr = [0,0,0,0]
lst = []
for x in lst:
    arr[0] = max(arr[0] , x)
    if x > 0: arr[1] += 1
    else: arr[2] += 1

n = len(lst)
for i in range(n - 3 , n):
    arr[4] += lst[i]
