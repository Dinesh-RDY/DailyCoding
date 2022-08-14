#include <vector>
using namespace std;
class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        int n = nums.size();
        int dp[n];
        dp[0] = 1;
        for (int i = 1; i < n; i++)
        {
            int res = 0;
            for (int j = 0; j < i; j++)
            {
                if (nums[i] > nums[j])
                {
                    res = max(res, dp[j]);
                }
            }
            dp[i] = res + 1;
        }
        int max_len = -1;
        for (int i = 0; i < n; i++)
        {
            max_len = max(max_len, dp[i]);
        }
        return max_len;
    }
};