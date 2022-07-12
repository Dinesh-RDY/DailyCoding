#include <vector>
using namespace std;
class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        int dp[nums.size()];
        for (int i = 0; i < nums.size(); i++)
            dp[i] = 1;
        dp[0] = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            int max_value = -1;
            for (int j = 0; j < i; j++)
            {
                if (nums[i] > nums[j])
                {
                    max_value = max(max_value, dp[j]);
                }
            }
            if (max_value != -1)
                dp[i] += max_value;
        }
        int ans = -1;
        for (int i = 0; i < nums.size(); i++)
            ans = max(ans, dp[i]);
        return ans;
    }
};