#include <bits/stdc++.h>
using namespace std;
// Not efficient Code
class Solution
{
public:
    bool static cmp(string &s1, string &s2)
    {
        return s1.length() < s2.length();
    }
    int longestStrChain(vector<string> &words)
    {
        int n = words.size();
        int dp[n], max_len = 1;
        sort(words.begin(), words.end(), cmp);
        dp[0] = 1;
        for (int i = 1; i < n; i++)
        {
            dp[i] = 1;
            for (int j = i - 1; j >= 0; j--)
            {
                int diff = words[i].length() - words[j].length();
                if (diff == 1)
                {
                    queue<char> q;
                    for (char x : words[j])
                        q.push(x);
                    for (char x : words[i])
                    {
                        if (x == q.front())
                        {
                            q.pop();
                        }
                        else
                        {
                            q.push(x);
                        }
                    }
                    if (q.size() == 1 && dp[i] < dp[j] + 1)
                        dp[i] = dp[j] + 1;
                }
                else if (diff > 1)
                {
                    break;
                }
            }
            max_len = max(max_len, dp[i]);
        }
        return max_len;
    }
};

// Optimized

class Solution
{
public:
    static bool compare(const string &s1, const string &s2)
    {
        return s1.length() < s2.length();
    }

    int longestStrChain(vector<string> &words)
    {
        sort(words.begin(), words.end(), compare);
        unordered_map<string, int> dp;
        int res = 0;
        for (string w : words)
        {
            for (int i = 0; i < w.length(); i++)
            {
                string pre = w.substr(0, i) + w.substr(i + 1);
                dp[w] = max(dp[w], dp.find(pre) == dp.end() ? 1 : dp[pre] + 1);
            }
            res = max(res, dp[w]);
        }
        return res;
    }
};