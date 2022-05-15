#include <bits/stdc++.h>
using namespace std;
// unsolved
class Solution
{
public:
    vector<int> findSubstring(string s, vector<string> &words)
    {
        int step = words[0].length();
        unordered_map<string, int> mp;
        int i = 0, j = 0;
        vector<int> v;
        while (j < s.length() && j + step < s.length())
        {
            string sub = s.substr(j, step);
            bool flag = false, flag2 = false;
            if (mp[sub])
            {
                i = mp[sub];
                j = j + step;
            }
            else
            {
                mp[sub] = j + step;
            }
            for (string x : words)
            {
                if (!mp[x])
                {
                    flag = true;
                    break;
                }
            }
            if (!flag)
            {
                mp[sub] = j + step;
            }
        }
    }
};