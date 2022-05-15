#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        void nextpermutation(vector<int>& nums){
             int n = nums.size();
            int index1 = INT_MIN, index2;
            for (int i = n - 2; i >= 0;i--){
                if(nums[i] < nums[i+1]){
                    index1 = i;
                    break;
                }
            }
            if(index1 == INT_MIN){
                reverse(nums.begin(), nums.end());
                return;
            }
            for (int i = n - 1; i > index1;i--){
                if(nums[i] > nums[index1]){
                    index2 = i;
                    break;
                }
            }
            swap(nums[index1], nums[index2]);
            reverse(nums.begin() + index1+1, nums.end());
        }
};