#include <bits/stdc++.h>
using namespace std;
long long recurse(int coins[], int n, int value, long long dp[])
{
    if (value == 0)
        return 1;
    if (value < 0)
        return 0;
    if (dp[value])
        return dp[value];
    for (int i = 0; i < n; i++)
    {
        dp[value] += (recurse(coins, n, value - coins[i], dp));
    }
    return dp[value];
}