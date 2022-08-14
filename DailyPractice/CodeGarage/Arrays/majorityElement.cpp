#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        // moores voting algorithm
        int count = 0;
        int element = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (count == 0)
                element = nums[i];
            if (nums[i] == element)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        int count = 0;
        for (auto x : nums)
        {
            if (x == element)
                count++;
        }
        if (count > (nums.size() / 2))
            return element;
        return -1;
    }
    int majorityElement2(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        int majority = ceil(nums.size() / 2.0);
        for (int x : nums)
        {
            if (mp[x])
                mp[x]++;
        }
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second >= majority)
            {
                return it->first;
            }
        }
        return -1;
    }
};