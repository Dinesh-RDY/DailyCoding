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
        if (sum % 2 == 1)
            return false;
        sum /= 2;
        bool dp[2][sum + 1];
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= sum; j++)
            {
                if (j == 0)
                    dp[i % 2][j] = true;
                else if (i == 0)
                    dp[i % 2][j] = false;
                else if (j < nums[i - 1])
                    dp[i % 2][j] = dp[(i + 1) % 2][j];
                else
                    dp[i % 2][j] = dp[(i + 1) % 2][j - nums[i - 1]] || dp[(i + 1) % 2][j];
            }
        }
        return dp[1][sum];
    }
};