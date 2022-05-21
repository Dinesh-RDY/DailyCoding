#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        void leftRotate(vector<int> nums , int k){
            int n = nums.size();
            k = k % n;
            if(k == 0)
                return;
            reverse(nums.begin(), nums.begin() + k);
            reverse(nums.begin() + k, nums.end());
            reverse(nums.begin(), nums.end());
        }

        void rightRotate(vector<int> nums,int k){
            int n = nums.size();
            k = k % n;
            if(k == 0)
                return;
            reverse(nums.begin(), nums.end());
            reverse(nums.begin(), nums.begin() + k);
            reverse(nums.begin() + k, nums.end());
        }
};