#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int maxDifference(vector<int>& nums){
            int maxDiff = INT_MIN , min_so_far = nums[0];
            for (int i = 1; i < nums.size();i++){
                maxDiff = max(maxDiff, nums[i] - min_so_far);
                min_so_far = min(min_so_far, nums[i]);
            }
            return maxDiff;
        }
};