#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findmaxConsecutiveOnes(vector<int> &nums)
    {
        int maxCount = 0;
        int presentCount = 0;
        for (int x : nums)
        {
            if (x == 1)
            {
                presentCount++;
            }
            else
            {
                maxCount = max(maxCount, presentCount);
                presentCount = 0;
            }
        }
        return presentCount > maxCount ? presentCount : maxCount;
    }
};
