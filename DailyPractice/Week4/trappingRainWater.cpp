#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    // Using two pointer technique
        int trappingRainwater(vector<int>& nums){
            int n = nums.size();
            if(n < 2)
                return 0;
            int i = 0, j = n - 1, previous = nums[0], previousj = nums[n - 1] , count = 0;
            while(i < j){
                previous = max(nums[i], previous);
                previousj = max(nums[j], previousj);
                if(nums[i] > nums[j]){
                    count += (previousj - nums[j]);
                    j--;
                }else{
                    count += (previous - nums[i]);
                    i++;
                }
            }
            return count;
        }
};