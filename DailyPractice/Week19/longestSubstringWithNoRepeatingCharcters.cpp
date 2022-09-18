#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        if (s.length() == 0)
            return 0;
        int i = 0, j = 0, max_len = 1;
        unordered_set<char> window;
        window.insert(s[i]);
        while (j + 1 < s.length())
        {
            j++;
            if (window.find(s[j]) == window.end())
                window.insert(s[j]);
            else
            {
                while (window.find(s[j]) != window.end())
                {
                    window.erase(s[i]);
                    i++;
                }
                window.insert(s[j]);
            }
            max_len = max(max_len, j - i + 1);
        }
        return max_len;
    }
};