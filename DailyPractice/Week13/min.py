

def editDistDP(str1, str2, m, n):

    dp = []
    for i in range(0, m+1):
        dp.append([0 for j in range(0, n+1)])

    for i in range(m + 1):
        for j in range(n + 1):

            if i == 0:
                dp[i][j] = j

            elif j == 0:
                dp[i][j] = i
            elif str1[i-1] == str2[j-1]:
                dp[i][j] = dp[i-1][j-1]
            else:
                dp[i][j] = 1 + min(dp[i][j-1],  dp[i-1][j])

    return dp[m][n]


str1 = "aabbb"
str2 = "aaabb"

print(editDistDP(str1, str2, len(str1), len(str2)))
