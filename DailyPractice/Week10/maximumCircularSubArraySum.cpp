#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int maxEnding = nums[0];
        int res = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            maxEnding = max(maxEnding + nums[i], nums[i]);
            res = max(res, maxEnding);
        }
        return res;
    }
    int maxSubarraySumCircular(vector<int> &nums)
    {
        int total_sum = 0;
        int normal_max_subarray = maxSubArray(nums);
        if (normal_max_subarray < 0)
            return normal_max_subarray;
        for (int i = 0; i < nums.size(); i++)
        {
            total_sum += nums[i];
            nums[i] = -nums[i];
        }
        int res = maxSubArray(nums);
        return max(total_sum + res, normal_max_subarray);
    }
};