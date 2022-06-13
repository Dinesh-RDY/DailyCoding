#include<bits/stdc++.h>
using namespace std;
class Solution{
    int firstOccurenece(vector<int>& nums , int target){
        int n = nums.size();
        int i = 0, j = n - 1, mid;
        while(i < j){
            mid = (i + j) / 2;
            if(nums[mid]> target){
                j = mid-1;
            }else if(nums[mid] < target){
                i = mid + 1;
            }else{
                if(mid == 0 || nums[mid] != nums[mid-1])
                    return mid;
                else{
                    j = mid - 1;
                }
            }
        }
        return -1;
    }
};