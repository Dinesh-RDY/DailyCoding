#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int h = nums.size() - 1;
        for(int i = h -1 ; i >= 0; i--){
            if(i + nums[i] >= h){
                h = i;
            }
        }
        return h <= 0;
    }
};