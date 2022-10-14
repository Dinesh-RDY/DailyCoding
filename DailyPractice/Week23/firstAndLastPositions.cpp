#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int firstOccurence(vector<int> &nums, int target)
    {
        int i = 0, j = nums.size() - 1, mid;
        while (i <= j)
        {
            mid = (i + j) / 2;
            if (nums[mid] > target)
                j = mid - 1;
            else if (nums[mid] < target)
                i = mid + 1;
            else
            {
                if (mid == 0 || nums[mid] != nums[mid - 1])
                    return mid;
                else
                    j = mid - 1;
            }
        }
        return -1;
    }
    int lastOccurence(vector<int> &nums, int target)
    {
        int i = 0, j = nums.size() - 1, mid;
        while (i <= j)
        {
            mid = (i + j) / 2;
            if (nums[mid] > target)
                j = mid - 1;
            else if (nums[mid] < target)
                i = mid + 1;
            else
            {
                if (mid == nums.size() - 1 || nums[mid] != nums[mid + 1])
                    return mid;
                else
                    i = mid + 1;
            }
        }
        return -1;
    }
    vector<int> searchRange(vector<int> &nums, int target)
    {
        return {firstOccurence(nums, target), lastOccurence(nums, target)};
    }
};