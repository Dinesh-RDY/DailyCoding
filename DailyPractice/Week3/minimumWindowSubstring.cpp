#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string minWindow(string s, string t)
    {
        vector<int> v(256, 0);
        for (char c : t)
        {
            v[c]++;
        }
        int start = 0, end = 0, count = 0, len = INT_MAX, head = 0;
        while (end != s.length())
        {
            if (v[s[end]] > 0)
                count++;
            v[s[end]]--;
            end++;
            while (count == t.size())
            {
                if (end - start < len)
                {
                    len = end - start;
                    head = start;
                }
                if (v[s[start]] == 0)
                    count--;
                v[s[start]]++;
                start++;
            }
        }
        if (len == INT_MAX)
            return "";
        else
            return s.substr(head, len);
    }
};