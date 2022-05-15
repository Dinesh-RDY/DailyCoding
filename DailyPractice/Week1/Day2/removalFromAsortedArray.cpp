#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.size() == 1 || nums.size() == 0)
        {
            return nums.size();
        }
        int presentNum = nums[0];
        int presentPos = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != presentNum)
            {
                nums[presentPos] = nums[i];
                presentNum = nums[i];
                presentPos++;
            }
        }
        return presentPos;
    }
};