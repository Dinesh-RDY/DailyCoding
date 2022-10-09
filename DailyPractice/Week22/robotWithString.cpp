#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string helper(string s)
    {
        char c = *min_element(s.begin(), s.end());
        stack<char> stk;
        int last = s.find_last_of(c);
        string ans = "";
        for (int i = 0; i < last; i++)
        {
            if (s[i] != c)
                stk.push(s[i]);
            else
                ans.push_back(s[i]);
        }
        while (!stk.empty())
        {
            ans.push_back(stk.top());
            stk.pop();
        }
        return ans;
    }
    string robotWithString(string s)
    {
        string ans = "";
        string temp = s;
        while(ans.length() != s.length()){
            ans += helper(temp);
            temp = s.substr(ans.length());
        }
        return ans;
    }
};