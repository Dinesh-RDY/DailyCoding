#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int combinationSum4(vector<int> &nums, int target)
    {
        // the reason we are using unsigned int is because
        // it wraps the interger overflow
        // in question given the answer will be 32 bit .
        // if this was not specified then we would have to use other
        // methods to store the dp sum intermediate results
        unsigned int dp[target + 1];
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        for (int i = 0; i <= target; i++)
        {
            for (int coin : nums)
            {
                if (coin <= i)
                {
                    dp[i] += dp[i - coin];
                }
            }
        }
        return dp[target];
    }
};