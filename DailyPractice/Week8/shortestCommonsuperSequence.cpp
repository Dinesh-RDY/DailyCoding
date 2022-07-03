#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string lcs(string str1, string str2)
    {
        int m = str1.length(), n = str2.length();
        int dp[m + 1][n + 1];
        for (int i = 0; i <= m; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                if (i == 0)
                    dp[i][j] = j;
                else if (j == 0)
                    dp[i][j] = i;
                else if (str1[i - 1] == str2[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = 1 + min(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        string ans;
        int i = m, j = n;
        while (i > 0 && j > 0)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                ans.push_back(str1[i - 1]);
                i--;
                j--;
            }
            else
            {
                if (dp[i - 1][j] > dp[i][j - 1])
                {
                    ans.push_back(str2[j - 1]);
                    j--;
                }
                else
                {
                    ans.push_back(str1[i - 1]);
                    i--;
                }
            }
        }
        while (i > 0)
        {
            ans.push_back(str1[i - 1]);
            i--;
        }
        while (j > 0)
        {
            ans.push_back(str2[j - 1]);
            j--;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    string shortestCommonSupersequence(string str1, string str2)
    {

        return lcs(str1, str2);
    }
};

int main(){
    int n = 10;
    int arr[n];
}