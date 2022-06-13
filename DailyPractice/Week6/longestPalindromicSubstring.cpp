#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string substring(string s, int l, int r)
    {
        while (l >= 0 and r < s.length() and s[l] == s[r])
        {
            l--;

            r++;
        }
        return s.substr(l + 1, r - l - 1);
    }
    // Using the idea of finding palindrome from a given point
    string longestPalindrome(string str)
    {
        string temp = "", res = "";
        for (int i = 0; i < str.length(); i++)
        {
            temp = substring(str, i, i + 1);
            if (res.length() < temp.length())
            {
                res = temp;
            }
            temp = substring(str, i, i);
            if (res.length() < temp.length())
                res = temp;
        }

        return res;
    }
    // Using DP
    string longestPalindrome1(string str)
    {
        int n = str.size();
        if (n == 1)
            return str;
        vector<vector<bool>> dp(n, vector<bool>(n, false));

        int length = 0;

        int start_idx = 0;

        for (int gap = 0; gap < n; gap++)
        {
            int start = 0;

            int end = start + gap;

            while (end < n)
            {
                if (gap == 0)
                {
                    dp[start][end] = true;
                }
                else if (gap == 1)
                {
                    if (str[start] == str[end])
                    {
                        dp[start][end] = true;
                    }
                }
                else
                {
                    if (str[start] == str[end])
                    {
                        dp[start][end] = dp[start + 1][end - 1];
                    }
                }

                if (dp[start][end])
                {
                    length = gap + 1;

                    start_idx = start;
                }

                start++;

                end++;
            }
        }

        return str.substr(start_idx, length);
    }
};