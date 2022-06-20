#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int isRepeat(string s)
    {
        // Your code goes here
        queue<char> q;
        q.push(s[0]);
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (q.front() == s[i])
            {
                q.pop();
            }
            q.push(s[i]);
        }
        if (q.size() == n)
            return false;
        for (int i = 0; i < n; i++)
        {
            if (q.front() != s[i])
            {
                return false;
            }
            q.pop();
            q.push(s[i]);
        }
        return true;
    }
};