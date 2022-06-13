#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        // Moores Voting Algorithm 
        int majorityElement(vector<int>& nums){
            int size = nums.size();
            int majority = nums[0];
            int count = 1, i = 1;
            while(i < size){
                if(nums[i] == majority){
                    count++;
                }else{
                    count--;
                    if(count == 0){
                        majority = nums[i];
                        count = 1;
                    }
                }
                i++;
            }
            count = 0;
            for (int i = 0; i < size ; i++){
                if(nums[i] == majority){
                    count++;
                }
            }
            if(count > size /2)
                return nums[i];
            return -1;
        }
};