#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
       int sp = nums[0], fp = nums[0];
        do{
            sp = nums[sp];
            fp = nums[nums[fp]];
        }while(sp != fp);
        sp = nums[0];
        while(sp != fp){
            sp = nums[sp];
            fp = nums[fp];
        }
        return sp;
    }
    int findDuplicates(vector<int>& nums){
        for (int i = 0; i < nums.size();i++){
            if(nums[abs(nums[i])] > 0)
                nums[abs(nums[i])] *= -1;
            else
                return abs(nums[i]);
        }
    }
};