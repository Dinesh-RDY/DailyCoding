#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cin >> number;
    int dp[number + 1];
    dp[0] = 0, dp[1] = 1;
    for (int i = 2; i <= number; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout << dp[number];
}