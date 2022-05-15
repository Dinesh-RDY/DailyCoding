#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        long fmax = LONG_MIN, smax = fmax, tmax = smax;
        for (int x : nums)
        {
            if (x > fmax)
            {
                tmax = smax;
                smax = fmax;
                fmax = x;
            }
            else if (x > smax && x != fmax)
            {
                tmax = smax;
                smax = x;
            }
            else if (x > tmax && x != fmax && x != smax)
            {
                tmax = x;
            }
        }
        return tmax == LONG_MIN ? int(fmax) : int(tmax);
    }
};