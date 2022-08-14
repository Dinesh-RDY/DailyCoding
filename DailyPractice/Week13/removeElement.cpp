#include <bits/stdc++.h>
using namespace std;
// This is same as moveZeroes here we remove a element and put it in last
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int sp = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                swap(nums[i], nums[sp]);
                sp++;
            }
        }
        return sp;
    }
};