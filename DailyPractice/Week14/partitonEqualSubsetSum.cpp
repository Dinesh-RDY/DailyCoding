#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool canPartition(vector<int> &nums)
    {
        int sum = 0, n = nums.size();
        for (int x : nums)
            sum += x;
        // If we want to divide the subset into two parts then the
        // sum has to be even else it is not possible   
        if (sum % 2 == 1)
            return false;
        sum /= 2;
        bool dp[n + 1][sum + 1];
        for (int i = 0; i <= n; i++)
        {
            dp[i][0] = true;
        }
        for (int i = 1; i <= sum; i++)
        {
            dp[0][i] = false;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= sum; j++)
            {
                if (j < nums[i - 1])
                    dp[i][j] = dp[i - 1][j];
                else
                    dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];
            }
        }
        return dp[n][sum];
    }
};