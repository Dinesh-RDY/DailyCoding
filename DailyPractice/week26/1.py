from heapq import heappop, heappush, heapify

n = int(input())
k = int(input())
x = []
heapify(x)
for i in range(n):
  temp = int(input())
  heappush(x , -1 * temp)
ans = 0
while len(x) > k:
  ans+=1
  for i in range(k):
    if len(x) == k:
      break
    temp = heappop(x)
    temp-= 1
    if temp != 0:
      heappush(x ,  -1* temp)
print(ans)