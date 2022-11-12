#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool arrayStringsAreEqual1(vector<string> &word1, vector<string> &word2)
    {
        string s1 = "", s2 = "";
        for (string &s : word1)
            s1 += s;
        for (string &s : word2)
            s2 += s;
        return s1 == s2;
    }
    // Stack approach
    bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
    {
        stack<char> stk;
        for (string &s : word1)
        {
            for (char c : s)
                stk.push(c);
        }
        for (int i = word2.size() - 1; i >= 0; i--)
        {
            for (int j = word2[i].size() - 1; j >= 0; j--)
            {
                if (stk.empty() || word2[i][j] != stk.top())
                    return false;
                stk.pop();
            }
        }
        if (stk.empty())
            return true;
        return false;
    }
};