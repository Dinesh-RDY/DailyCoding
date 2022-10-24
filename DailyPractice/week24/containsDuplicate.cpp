#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            if (mp.find(nums[i]) == mp.end())
            {
                mp.insert(make_pair(nums[i], i));
            }
            else
            {
                if (i - mp[nums[i]] <= k)
                    return true;
                else
                    mp[nums[i]] = i;
            }
        }
        return false;
    }
};