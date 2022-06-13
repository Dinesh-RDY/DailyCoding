#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int> increment(vector<int>& nums){
            int carry = 1;
            for (int i = nums.size() -1 ; i >= 0;i--){
                if(nums[i] + carry == 10){
                    nums[i] = 0;
                }else{
                    nums[i]++;
                    break;
                }
            }
            if(nums[0] == 0){
                nums[0] = 1;
                nums.push_back(0);
            }
            return nums;
        }
        
};