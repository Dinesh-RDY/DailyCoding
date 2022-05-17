#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int res = nums[0] + nums[1] + nums[2];
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1, k = n - 1; j < k;)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum > target)
                    k--;
                else
                    j++;
                if (abs(target - sum) < abs(target - res))
                    res = sum;
            }
        }
        return res;
    }
};