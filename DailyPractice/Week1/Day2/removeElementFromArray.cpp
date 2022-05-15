#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void shift(vector<int> &nums, int pos)
    {
        for (int i = pos; i < nums.size(); i++)
        {
            nums[i] = nums[i + 1];
        }
    }

    int removeElement(vector<int> &nums, int val)
    {
        int count = 0;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (nums[i] == val)
            {
                count++;
                shift(nums, i);
            }
        }
        return nums.size() - count;
    }
};