#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin >> n;
    long w;
    cin >> w;
    long W[n];
    int P[n];
    for (int i = 0; i < n; i++)
    {
        cin >> W[i];
        cin >> P[i];
    }
    long long dp[n + 1][w + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (W[i-1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], P[i-1] + dp[i - 1][j - W[i-1]]);
            }
        }
    }
    cout << dp[n][w];
}