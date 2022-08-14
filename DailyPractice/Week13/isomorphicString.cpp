#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        unordered_map<char, int> mp1, mp2;
        for (int i = 0; i < s.length(); i++)
        {
            mp1[s[i]] = i + 1;
            mp2[t[i]] = i + 1;
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (mp1[s[i]] != mp2[t[i]])
                return false;
        }
        return true;
    }
};