#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int rob(vector<int> &nums)
    {
        if (nums.size() == 1)
            return nums[0];
        vector<int> dp(nums.size(), 0);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for (int i = 2; i < nums.size(); i++)
        {
            int max_profit = INT_MIN;
            for (int j = 0; j <= i - 2; j++)
            {
                max_profit = max(max_profit, dp[j]);
            }
            dp[i] = max_profit + nums[i];
        }
        int ans = -1;
        for (int i = 0; i < dp.size(); i++)
        {
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};