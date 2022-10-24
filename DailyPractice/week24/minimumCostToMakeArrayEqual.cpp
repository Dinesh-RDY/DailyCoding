#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long costSum(vector<int> &nums, vector<int> &cost, int k)
    {
        long long sum = 1907611126748;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += (k - nums[i]) * cost[i];
        }
        return sum;
    }
    long long minCost(vector<int> &nums, vector<int> &cost)
    {
        int l = nums[0], h = nums[0];
        for (int i = 0; i < nums.size(); i++)
        {
            if (l > nums[i])
                l = nums[i];
            if (h < nums[i])
                h = nums[i];
        }
        while ((h - l) > 2)
        {
            int mid1 = l + (h - l) / 3;
            int mid2 = h - (h - l) / 3;
            int cost1 = costSum(nums, cost, mid1);
            int cost2 = costSum(nums, cost, mid2);
            if (cost1 < cost2)
                h = mid2;
            else
                l = mid1;
        }
        return costSum(nums, cost, (l + h) / 2);
    }
};