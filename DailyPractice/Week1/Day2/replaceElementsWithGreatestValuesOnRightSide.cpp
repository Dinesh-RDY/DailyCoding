#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> replaceElemnts(vector<int> &nums)
    {
        vector<int> temp(nums.size());
        int max_val = INT_MIN;
        for (int i = nums.size() - 1; i > 0; i--)
        {
            max_val = max(max_val, nums[i]);
            temp[i - 1] = max_val;
        }
        for (int i = 0; i < nums.size() - 1; i++)
        {
            nums[i] = temp[i];
        }
        nums[nums.size() - 1] = -1;
        return nums;
    }
};