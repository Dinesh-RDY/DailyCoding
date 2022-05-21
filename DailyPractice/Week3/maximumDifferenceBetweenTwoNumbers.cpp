#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int maximumDifference(vector<int>& nums){
            int min_so_far = nums[0], ans = -1;
            bool flag = false;
            for (int i = 1; i < nums.size(); i++){
                if(nums[i] > min_so_far)
                    flag = true;
                ans = max(ans, nums[i] - min_so_far);
                min_so_far = min(min_so_far, nums[i]);
            }
            if(flag)
                return ans;
            return -1;
        }
};