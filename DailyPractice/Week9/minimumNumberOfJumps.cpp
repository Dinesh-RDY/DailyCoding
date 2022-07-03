#include <limits.h>
#include <algorithm>
int minimumjumps(int arr[], int n)
{
    // code here
    if (arr[0] == 0)
        return -1;
    int dp[n];
    for (int i = 0; i < n; i++)
    {
        dp[i] = INT_MAX;
    }
    dp[0] = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] + j >= i)
            {
                dp[i] = std::min(dp[i], dp[j] + 1);
            }
        }
    }
    return dp[n - 1] == INT_MAX ? -1 : dp[n - 1];
}