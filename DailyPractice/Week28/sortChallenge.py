from os import path
import sys 

class Solution:
    def solve(self):
        n = int(input())
        a  = list(map(int , input().split())) 
        b =  list(map(int , input().split()))
        a.sort()
        for i in range(n):
            if a[i] != b[i]:
                print("no")
                return
        print("yes")
        

s = Solution()
if path.exists('input.txt'):
    sys.stdin = open('input.txt', "r")
    sys.stdout = open('output.txt' , "w")
t = int(input())
while t != 0:
    s.solve()
    t -= 1