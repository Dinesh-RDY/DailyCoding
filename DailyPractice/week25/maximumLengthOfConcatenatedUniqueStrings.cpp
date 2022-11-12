#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxLength(vector<string> &arr)
    {
        vector<bitset<26>> dp = {bitset<26>()};
        int res = 0;
        for (string &s : arr)
        {
            bitset<26> a;
            for (char c : s)
            {
                a.set(c - 'a');
            }
            if (a.count() < s.size())
                continue;
            for (int i = 0; i < dp.size(); i++)
            {
                auto b = dp[i];
                // If there is any bit that is set then no need to add
                if ((a & b).any())
                    continue;
                // else this is a unique string so add it to dp
                dp.push_back(a | b);
                // length of this unique string is a.count + b.count
                res = max(res, (int)a.count() + (int)b.count());
            }
        }
        return res;
    }
};