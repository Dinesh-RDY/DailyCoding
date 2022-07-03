#include<bits/stdc++.h>
using namespace std;
long long numberOfWays(int coins[], int n, int value)
{
    long long dp[value + 1]{0};
    dp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = coins[i]; j <= value; j++)
        {
            dp[j] += dp[j - coins[i]];
        }
    }
    return dp[value];
}