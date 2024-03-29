#include <bits/stdc++.h>
using namespace std;
int min_operations(string s1, string s2, int m, int n)
{
    int dp[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
        dp[i][0] = i;
    for (int j = 0; j <= n; j++)
    {
        dp[0][j] = j;
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s1[m - 1] == s2[n - 1])
            {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = 1 + min(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[m][n];
}
int main()
{
    string s1 = "aaa", b = "bbbb";
    cout << min_operations(s1, b,3,4);
}