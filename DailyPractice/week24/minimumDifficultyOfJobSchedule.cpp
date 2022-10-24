#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int dfs(vector<int> &nums, vector<vector<int>> &dp, int d, int cut)
    {
        if (d == 1)
        {
            int maxi = 0;
            while (cut < nums.size())
            {
                maxi = max(maxi, nums[cut]);
                cut++;
            }
            return maxi;
        }
        if (dp[d][cut] != -1)
            return dp[d][cut];
        int maxi = -1;
        int res = INT_MAX;
        for (int i = cut; i <= nums.size() - d; i++)
        {
            maxi = max(maxi, nums[i]);
            res = min(res, maxi + dfs(nums, dp, d - 1, i + 1));
        }
        return dp[d][cut] = res;
    }
    int minDifficulty(vector<int> &nums, int d)
    {
        int n = nums.size();
        if (d > n)
            return -1;
        vector<vector<int>> dp(d + 1, vector<int>(n, -1));
        return dfs(nums, dp, d, 0);
    }
};