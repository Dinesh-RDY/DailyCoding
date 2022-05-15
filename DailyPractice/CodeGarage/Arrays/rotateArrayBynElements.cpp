#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        void rotate(vector<int>& nums , int k){
            k = k % nums.size();
            reverse(nums.begin(), nums.end());
            reverse(nums.begin(), nums.begin()+k);
            reverse(nums.begin()+k, nums.end());
        }
        void rotate2(vector<int>& nums, int k){
            vector<int> numsCopy(nums.begin(), nums.end());
            int n = nums.size();
            k = k % n;
            for (int i = 0; i < n; i++){
                nums[(i+k+1) % n] = numsCopy[i];
            }
        }
};