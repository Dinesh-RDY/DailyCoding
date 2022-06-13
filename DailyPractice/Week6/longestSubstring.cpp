#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        if (s.length() < 2)
            return s.length();
        int i = 0, j = 0, ans = INT_MIN;
        int arr[256] = {0};
        while (j < s.length())
        {
            if (i && i == j)
            {
                j++;
                arr[s[i]] = 1;
                continue;
            }
            if (!arr[s[j]])
            {
                arr[s[j]] = 1;
                ans = max(j - i + 1, ans);
                j++;
            }
            else
            {
                arr[s[i]] = 0;
                i++;
            }
        }
        return ans;
    }
};