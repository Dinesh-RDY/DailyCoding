from os import path
import sys 

class Solution:
    def solve(self):
        n , d = map(int, input().split())
        ls = []
        for i in range(n):
            ls.append(int(input()))
        ls.sort()
        i = 0
        count = 0
        while i < len(ls) - 1:
            if abs(ls[i] - ls[i + 1]) <= d:
                count += 1
                i += 2
            else:
                i += 1

        print(count)
        

s = Solution()
if path.exists('input.txt'):
    sys.stdin = open('input.txt', "r")
    sys.stdout = open('output.txt' , "w")
# t = int(input())
# while t != 0:
s.solve()