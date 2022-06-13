#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 0 || n == 1)
            return n;
        int sp = 0, fp = 1;
        while (fp < n)
        {
            if (nums[sp] != nums[fp])
            {
                nums[sp + 1] = nums[fp];
                sp++;
            }
            fp++;
        }
        return sp + 1;
    }
};