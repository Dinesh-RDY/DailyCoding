#include <algorithm>
using namespace std;
// dp arrays initially is all zeroes 
int min_jumps(vector<int> &nums, int n, int dp[], int i = 0)
{
    if (i == n - 1)
        return 0;
    if (i >= n)
        return INT_MAX;
    if (dp[i] != 0)
        return dp[i];
    int steps = INT_MAX;
    for (int j = 1; j <= nums[i]; j++)
    {
        int next_cell = i + j;
        int sub_problem = min_jumps(nums, n, dp, next_cell);
        if (sub_problem != INT_MAX)
            steps = min(steps, sub_problem + 1);
    }
    return dp[i] = steps;
}