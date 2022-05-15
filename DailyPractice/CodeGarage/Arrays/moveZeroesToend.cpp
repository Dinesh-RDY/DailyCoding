#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int> & nums){
        int sp = 0;
        for (int i = 0; i < nums.size();i++){
            if(nums[i] != 0){
                nums[sp] = nums[i];
                sp++;
            }
        }
        for (int i = sp; i < nums.size();i++){
            nums[i] = 0;
        }
    }
};
