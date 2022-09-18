def longestPalindrome(self, s):
        longest_palindrom = ''
        dp = [[0]*len(s) for _ in range(len(s))]
        for i in range(len(s)):
            dp[i][i] = True
            longest_palindrom = s[i]
        for i in range(len(s)-1,-1,-1):		 
            for j in range(i+1,len(s)):  
                if s[i] == s[j]:  
                    if j-i ==1 or dp[i+1][j-1] is True:
                        dp[i][j] = True
        
        for i in range(2 , len(s)) :
            for j in range(i + 1 , len(s)):
                if dp[i][j]:
                    if (i + j) % 2 == 0 and dp[i][(i+j)//2] and dp[( i+ j)// 2][j]:
                        print(s[i : j])

