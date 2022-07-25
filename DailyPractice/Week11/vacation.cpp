#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, lastdone = 0;
    cin >> n;
    int dp[n][3]{0};

    pair<int, int> temp;
    for (int i = 0; i < n; i++)
    {
        int arr[3];
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[j];
        }
        if (i == 0)
        {
            dp[0][0] = arr[0];
            dp[0][1] = arr[1];
            dp[0][2] = arr[2];
        }
        else
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    if (j == k)
                        continue;
                    dp[i][j] = max(dp[i][j], dp[i - 1][k] + arr[j]);
                }
            }
        }
    }
    cout << *max_element(dp[n - 1], dp[n - 1] + 3);
}