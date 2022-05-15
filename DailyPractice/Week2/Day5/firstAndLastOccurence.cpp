#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1);
        if(nums.size() == 0) return ans;
        int n = nums.size();
        int i = 0 , j = n-1 , mid;
        
        while(i < j){
            mid = i + (j-i) / 2;
            if(nums[mid] >= target){
                j = mid;
            }else{
                i = mid+1;
            }
        }
        if(nums[i] != target){
            return ans;
        }
        ans[0] = i;
        i = 0 , j = n -1;
        while( i <  j){
            mid = i +(j-i +1)/2;
            if(nums[mid] > target){
                j = mid-1;
            }else{
                i = mid;
            }
        }
        ans[1] = i;
        
        return ans;
    }
};