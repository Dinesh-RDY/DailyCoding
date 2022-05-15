#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int thresholdCal(vector<int> &nums, int k)
    {
        int sum = 0;
        for (int x : nums)
            sum += x / k;
        return sum;
    }
    int smallestGoodDivisor(vector<int> nums, int threshold)
    {
        int max = nums[0];
        for (int x : nums)
        {
            if (max < x)
            {
                max = x;
            }
        }
        int l = 1, h = max, mid;
        while (l < h)
        {
            mid = l + (h - l) / 2;
            if (thresholdCal(nums, mid) < threshold)
                h = mid;
            else
                l = mid + 1;
        }
        return l;
    }
};