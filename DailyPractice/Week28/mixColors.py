from os import path
import sys 

class Solution:
    def solve(self):
        n = int(input())
        lst = list(map(int, input().split()))
        # lst.sort()
        # maxi = lst[n-1]
        # count = 0
        # for i in range(n - 1):
        #     if lst[i] == lst[i + 1]:
        #         count += 1
        #         maxi = maxi + lst[i]
        x = dict()
        for ele in lst:
            x[ele] = 1
        print(n - len(x))
        

s = Solution()
if path.exists('input.txt'):
    sys.stdin = open('input.txt', "r")
    sys.stdout = open('output.txt' , "w")
t = int(input())
while t != 0:
    s.solve()
    t -= 1