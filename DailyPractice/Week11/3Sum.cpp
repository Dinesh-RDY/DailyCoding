#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());

        if (nums[0] > 0 || nums[nums.size() - 1] < 0)
            return {};

        vector<vector<int>> ans;
        for (int i = 0; i < nums.size() - 2; i++)
        {
            if (i && nums[i] == nums[i - 1])
                continue;

            int start = i + 1, end = nums.size() - 1;
            while (start < end)
            {
                int sum = nums[i] + nums[start] + nums[end];
                if (sum == 0)
                {
                    ans.push_back({nums[i], nums[start], nums[end]});
                    start++;
                    while (start < end && nums[start - 1] == nums[start])
                    {
                        start++;
                    }
                }
                else if (sum < 0)
                {
                    start++;
                }
                else
                {
                    end--;
                }
            }
        }
        return ans;
    }
};