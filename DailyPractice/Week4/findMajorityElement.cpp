#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        // Moore's Voting Algorithm:= 
        int findMajority(vector<int>& nums){
            int maj = 0, count = 1;
            for (int i = 1; i < nums.size(); i++){
                if(nums[i] == nums[maj])
                    count++;
                else
                    count--;
                if(count == 0){
                    maj = i;
                    count = 1;
                }
            }
            count = 0;
            for (int i = 0; i < nums.size(); i++){
                if(nums[maj] == nums[i]){
                    count++;
                }
            }
            if(count > nums.size()/2)
                return nums[maj];
            else
                return -1;
        }
};