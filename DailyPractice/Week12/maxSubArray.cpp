#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int max_curr_sum = 0, total_max_sum = 0;
        for (int n : nums)
        {
            max_curr_sum = max(max_curr_sum, max_curr_sum + n);
            total_max_sum = max(total_max_sum, max_curr_sum);
        }
        return total_max_sum;
    }
};
