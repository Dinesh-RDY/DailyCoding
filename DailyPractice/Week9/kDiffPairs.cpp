#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findPairs(vector<int> &nums, int k)
    {
        unordered_map<int, int> a;
        for (int i : nums)
            a[i]++;
        int ans = 0;
        for (auto x : a)
        {
            if (k == 0)
            {
                if (x.second > 1)
                    ans++;
            }
            // Search through the map this will eliminate the duplicates
            else if (a.find(x.first + k) != a.end())
                ans++;
        }

        return ans;
    }
};