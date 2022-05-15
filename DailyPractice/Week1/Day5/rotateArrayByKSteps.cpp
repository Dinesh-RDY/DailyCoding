#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        void rotate(vector<int>& nums , int k){
            // solution 1 
            // int n = nums.size();
            // k = k % n;
            // if(k==0)
            //     return;
            // reverse(nums.begin(), nums.end());
            // reverse(nums.begin(), nums.begin() + k);
            // reverse(nums.begin() + k, nums.end());
            // return;

            // solution2:
            vector<int> numscopy(nums);
            for (int i = 0; i < nums.size(); i++){
                nums[(i + k)%nums.size()] = numscopy[i];
            }
            return;
        }
};