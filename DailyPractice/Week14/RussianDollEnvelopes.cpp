class Solution
{
#include <bits/stdc++.h>
using namespace std;

public:
    int maxEnvelopes(vector<vector<int>> &letters)
    {
        int n = letters.size();
        int dp[n], maxi = 1;
        sort(letters.begin(), letters.end());
        dp[0] = 1;
        for (int i = 1; i < n; i++)
        {
            dp[i] = 1;
            for (int j = 0; j < i; j++)
            {
                if ((letters[j][0] < letters[i][0] && letters[j][1] < letters[i][1]) && dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                }
            }
            maxi = max(maxi, dp[i]);
        }
        return maxi;
    }
};