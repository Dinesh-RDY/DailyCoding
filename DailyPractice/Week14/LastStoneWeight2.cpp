#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lastStoneWeightII(vector<int> &stones)
    {
        int sum = 0;
        for (int stone : stones)
            sum += stone;
        int target = sum / 2, n = stones.size();
        vector<int> dp(target + 1, 0);
        for (int stone : stones)
        {
            for (int j = target; j >= stone; j--)
            {
                dp[j] = max(dp[j], stone + dp[j - stone]);
            }
        }
        return sum - 2 * dp[target];
    }
};