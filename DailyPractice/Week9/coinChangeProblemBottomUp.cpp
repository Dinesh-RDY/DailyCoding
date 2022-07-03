#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

long long minimumNumberOfCoins(int coins[], int numberOfCoins, int value)
{
    vector<int> dp(value + 1, 0);
    dp[0] = 0;

    for (int i = 1; i <= value; i++)
    {
        dp[i] = INT_MAX;
        for (int j = 0; j < numberOfCoins; j++)
        {
            if (i - coins[j] >= 0 && dp[i - coins[j]] != INT_MAX)
            {
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }
    return dp[value] == INT_MAX ? -1 : dp[value];
}