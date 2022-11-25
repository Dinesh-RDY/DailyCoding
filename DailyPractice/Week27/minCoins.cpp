#include <bits/stdc++.h>
using namespace std;
int countTeams(int teamsize_1, int teamsize_2, int p)
{
    int dp[p + 1];
    dp[0] = 0;
    for (int i = 1; i <= p; i++)
        dp[i] = INT_MAX;
    for (int i = 1; i <= p; i++)
    {
        if (teamsize_1 <= i)
        {
            int sub_res = dp[i - teamsize_1];
            if (sub_res != INT_MAX && sub_res + 1 < dp[i])
                dp[i] = sub_res + 1;
        }
        if (teamsize_2 <= i)
        {
            int sub_res = dp[i - teamsize_2];
            if (sub_res != INT_MAX && sub_res + 1 < dp[i])
                dp[i] = sub_res + 1;
        }
    }
    if (dp[p] == INT_MAX)
        return -1;
    return dp[p];
}


int main()
{
    cout << countTeams(3, 4, 6);
}