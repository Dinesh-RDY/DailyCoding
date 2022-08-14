#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findLongestChain(vector<vector<int>> &pairs)
    {
        int n = pairs.size();
        int dp[n], maxi = 1;
        sort(pairs.begin(), pairs.end());
        dp[0] = 1;
        for (int i = 1; i < n; i++)
        {
            dp[i] = 1;
            for (int j = 0; j < i; j++)
            {
                if (pairs[j][1] < pairs[i][0] && dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                }
            }
            maxi = max(maxi, dp[i]);
        }
        return maxi;
    }
};
