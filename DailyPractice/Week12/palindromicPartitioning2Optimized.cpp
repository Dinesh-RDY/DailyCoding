// find min cuts
// we reuse the palindromic partitioning
// run time error

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minCut(string s)
    {
        vector<vector<int>> dp(s.length(), vector<int>(s.length(), 0));
        for (int i = 0; i < s.length(); i++)
        {
            dp[i][i] = 1;
        }
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == s[i + 1])
                dp[i][i + 1] = 1;
        }
        for (int k = 3; k <= s.length(); k++)
        {
            for (int i = 0; i < s.length() - k + 1; i++)
            {
                int j = i + k - 1;
                if (s[i] == s[j] && dp[i + 1][j - 1])
                    dp[i][j] = 1;
            }
        }
        func(0, s, dp, 0);
    }
    int ans = INT_MAX;
    void func(int index, string s, vector<vector<int>> &dp, int cuts)
    {
        for (int i = index; i < s.length(); i++)
        {
            if (dp[index][i] && dp[index + 1][s.length() - 1])
            {
                ans = min(ans, cuts + 1);
                return;
            }
            else if (dp[index][i])
            {
                func(index + 1, s, dp, cuts + 1);
                func(index + 1, s, dp, cuts);
            }
            else
            {
                func(index + 1, s, dp, cuts);
            }
        }
    }
};