#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        void moveZeros(vector<int> & nums){
            int last_non_zero = 0;
            for (int i = 0; i < nums.size();i++){
                if(nums[i] != 0){
                    nums[last_non_zero] = nums[i];
                    last_non_zero++;
                }
            }
            for (int i = last_non_zero; i < nums.size();i++){
                nums[i] = 0;
            }
        }
};