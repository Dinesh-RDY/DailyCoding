#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    //     int recurse(vector<int>& nums, vector<int>& dp, int n){
    //     if(n == 0) return 1;
    //     if(dp[n]) return dp[n];
    //     else{
    //         dp[n] = max(nums[n-1]*recurse(nums,dp,n-1) , recurse(nums,dp,n-1));
    //     }
    //     return dp[n];
    // }

    int maxProduct(vector<int> nums)
    {
        int curr_min = nums[0];
        int curr_max = nums[0];
        int res = nums[0];
        int n = nums.size();
        for (int i = 1; i < n; i++)
        {
            int temp = curr_max * nums[i];
            int temp2 = curr_min * nums[i];
            curr_max = max(max(temp2, temp), nums[i]);
            curr_min = min(min(temp2, temp), nums[i]);
            res = max(curr_max, res);
        }
        return res;
    }
};