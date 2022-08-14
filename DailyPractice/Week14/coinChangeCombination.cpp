#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int change(int amount, vector<int> &coins)
    {
        int dp[amount + 1];
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        // Combination so for every coin try making score
        // This ensures no repetetions like 2, 1  and 1, 2
        for (int coin : coins)
        {
            for (int j = coin; j <= amount; j++)
            {
                dp[j] += dp[j - coin];
            }
        }
        return dp[amount];
    }
};