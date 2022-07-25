#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n;
    cin >> k;
    int h[n], dp[n];
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    dp[0] = 0;
    dp[1] = abs(h[1] - h[0]);
    for (int i = 2; i < n; i++)
    {
        int min_value = INT_MAX;
        for (int j = 1; j <= k && j <= i; j++)
        {
            min_value = min(min_value, dp[i - j] + abs(h[i - j] - h[i]));
        }
        dp[i] = min_value;
    }
    cout << dp[n - 1];
}