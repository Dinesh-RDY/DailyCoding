#include <bits/stdc++.h>
using namespace std;
// First simple Solution one TLE
// Tried to optimize by remembering the max_len and max_index
class Solution
{
public:
    int deleteString(string s)
    {
        int n = s.length();
        int dp[n];
        dp[n - 1] = 1;
        for (int i = n - 2; i >= 0; i--)
        {
            dp[i] = 1;
            for (int window = 1; window + i < n; window++)
            {
                if (s.substr(i, window) == s.substr(i + window, window))
                    dp[i] = max(dp[i], dp[i + window] + 1);
            }
        }
        return dp[0];
    }
};

// Not Working

int deleteString1(string s)
{
    int n = s.length();
    int dp[n], max_index = n, max_value = INT_MIN;
    dp[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        dp[i] = 1;
        for (int window = 1; window + i < max_index; window++)
        {
            if (s.substr(i, window) == s.substr(i + window, window))
            {
                if (dp[i] < dp[i + window] + 1)
                {
                    dp[i] = dp[i + window] + 1;
                    if (max_value < dp[i])
                    {
                        max_value = dp[i];
                        max_index = i;
                    }
                }
            }
        }
    }
    return dp[0];
}
int main()
{
    cout << deleteString1("aaabaab");
    return 0;
}
