from os import path
import sys 

class Solution:
    def solve(self):
        n , k = list(map(int , input().split()))
        lst = list(map(int, input().split()))
        lst.sort()
        mini = float("inf")
        for i in range(n - k + 1):
            mini = min(mini , lst[i + k - 1] - lst[i])
        print(mini)

s = Solution()
if path.exists('input.txt'):
    sys.stdin = open('input.txt', "r")
    sys.stdout = open('output.txt' , "w")
t = int(input())
while t != 0:
    s.solve()
    t -= 1