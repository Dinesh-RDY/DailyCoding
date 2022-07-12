#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string removeDuplicateLetters(string s)
    {
        unordered_map<char, int> mp;
        unordered_set<char> ht;
        for (char c : s)
            mp[c]++;
        string ans;
        stack<char> stk;
        int i = 1;
        stk.push(s[0]);
        ht.insert(s[0]);
        while (i < s.length())
        {

            if (!(ht.find(s[i]) != ht.end() || mp[s[i]] <= 0))
            {

                while (!stk.empty() && stk.top() > s[i] && mp[stk.top()])
                {
                    ht.erase(stk.top());
                    stk.pop();
                }
                stk.push(s[i]);
                ht.insert(s[i]);
            }
            mp[s[i]]--;
            i++;
        }
        while (!stk.empty())
        {
            ans.push_back(stk.top());
            stk.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};