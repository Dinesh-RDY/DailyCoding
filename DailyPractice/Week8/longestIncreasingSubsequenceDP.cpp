#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        vector<int> dp(nums.size(), 1);
        int ans = -1;
        for (int i = 1; i < nums.size(); i++)
        {
            int temp = -1;
            for (int j = 0; j < i; j++)
            {
                if (nums[j] < nums[i])
                {
                    temp = max(temp, dp[j]);
                }
            }
            if (temp != -1)
                dp[i] += temp;
            ans = max(ans, dp[i]);
        }

        return ans;
    }
};