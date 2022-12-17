from os import path
import sys 

class Solution:
    def solve(self):
        pass
        

s = Solution()
if path.exists('input.txt'):
    sys.stdin = open('input.txt', "r")
    sys.stdout = open('output.txt' , "w")
t = int(input())
while t != 0:
    s.solve()
    t -= 1