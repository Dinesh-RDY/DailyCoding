#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Approach using stack
    bool backspaceCompare(string s, string t)
    {
        stack<char> stk1, stk2;
        for (char c : s)
        {
            if (c == '#' && !stk1.empty())
                stk1.pop();
            else if (c != '#')
                stk1.push(c);
        }
        for (char c : t)
        {
            if (c == '#' && !stk2.empty())
                stk2.pop();
            else if (c != '#')
                stk2.push(c);
        }
        while (!stk1.empty() && !stk2.empty())
        {
            if (stk1.top() != stk2.top())
                return false;
            stk1.pop();
            stk2.pop();
        }
        if (stk1.empty() && stk2.empty())
            return true;
        return false;
    }
};
// Aproach using two Pointers
class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        int i = s.length() - 1, j = t.length() - 1;
        while (true)
        {
            int back = 0;
            while (i >= 0 && (back > 0 || s[i] == '#'))
            {
                if (s[i] == '#')
                    back++;
                else
                    back--;
                i--;
            }
            back = 0;
            while (j >= 0 && (t[j] == '#' || back > 0))
            {
                if (t[j] == '#')
                    back++;
                else
                    back--;
                j--;
            }
            if (i >= 0 && j >= 0 && s[i] == t[j])
            {
                i--;
                j--;
            }
            else
            {
                break;
            }
        }
        return i == -1 and j == -1;
    }
};