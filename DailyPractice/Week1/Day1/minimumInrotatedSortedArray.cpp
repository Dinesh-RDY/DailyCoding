#include<bits/stdc++.h>
using namespace std;
class Solution{
    public: 
        int findMin(vector<int> nums){
            int l = 0, h = nums.size() - 1, mid;
            while(l < h){
                mid = l + (h - l) / 2;
                if(nums[0] > nums[mid]){
                    h = mid;
                }else{
                    l = mid + 1;
                }
            }
            if(nums[l] < nums[0]){
                return l;
            }else{
                return 0;
            }
        }
};