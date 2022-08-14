#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> largestDivisibleSubset(vector<int> &nums)
    {
        int n = nums.size();
        if (n < 2)
            return nums;
        vector<int> ans, dp(n, 1);
        sort(nums.begin(), nums.end());
        int maxi = 0;
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (nums[i] % nums[j] == 0 && dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                }
            }
            if (maxi < dp[i])
                maxi = dp[i];
        }
        int prev = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (dp[i] == maxi && (prev % nums[i] == 0 || prev == -1))
            {
                ans.push_back(nums[i]);
                prev = nums[i];
                maxi -= 1;
            }
        }
        return ans;
    }
};