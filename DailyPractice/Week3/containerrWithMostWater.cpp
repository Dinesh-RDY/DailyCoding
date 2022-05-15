#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int maxArea(vector<int>& nums){
            int n = nums.size();
            if(n < 2){
                return -1;
            }
            int i = 0, j = n - 1, max_vol = 0;
            while(i < j){
                max_vol = max(max_vol, min(nums[i], nums[j]) * (j - i));
                if(nums[i] > nums[j]){
                    int temp = nums[j];
                    j--;
                    while(i < j && nums[j] <= temp)
                        j--;
                }else{
                    int temp = nums[i];
                    i++;
                    while(i < j && nums[i] <= temp)
                        i++;
                }
            }
            return max_vol;
        }
};