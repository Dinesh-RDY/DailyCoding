#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        int k;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] >= 0)
            {
                k = i;
                break;
            }
        }
        int j = k - 1;
        vector<int> result(nums.size());
        int i = 0;
        while (j >= 0 && k < nums.size())
        {
            if (abs(nums[j]) < nums[k])
            {
                result[i++] = nums[j] * nums[j];
                j--;
            }
            else
            {
                result[i++] = nums[k] * nums[k];
                k++;
            }
        }
        while (j >= 0)
        {
            result[i++] = nums[j] * nums[j];
            j--;
        }
        while (k < nums.size())
        {
            result[i++] = nums[k] * nums[k];
            k++;
        }
        return result;
    }
};