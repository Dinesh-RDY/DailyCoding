#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
            int sp = 0, val = INT_MIN;
            for (int i = 0; i < nums.size();i++){
                if(nums[i] != val){
                    nums[sp] = nums[i];
                    sp++;
                    val = nums[i];
                }
            }
            return sp;
    }
};