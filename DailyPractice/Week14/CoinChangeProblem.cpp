#include <bits/stdc++.h>
using namespace std;
// Tabulation
class Solution
{
public:
    int coinChange(vector<int> &coins, int amount)
    {
        if (amount == 0)
            return 0;
        long long dp[amount + 1];
        dp[0] = 1;
        for (int i = 1; i <= amount; i++)
        {
            dp[i] = INT_MAX;
            for (int coin : coins)
            {
                if (i > coin)
                {
                    dp[i] = min(dp[i], 1 + dp[i - coin]);
                }
                else if (i == coin)
                {
                    dp[i] = min(dp[i], dp[i - coin]);
                }
            }
        }
        return dp[amount] == INT_MAX ? -1 : dp[amount];
    }
};