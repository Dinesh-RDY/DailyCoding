// dp[i] = dp[i- 1] + dp[i-2] + dp[i-3] + .. + dp[0]
// dp[0] = 1
int countWays(int n)
{
    // your code here
    int dp[n + 1]{0};
    dp[0] = 1;
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            dp[j] += dp[j - i] % 1000000007;
        }
    }
    return dp[n];
}