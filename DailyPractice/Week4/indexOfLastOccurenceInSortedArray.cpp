#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int LastOccurence(vector<int>& nums , int target){
            int n = nums.size();
            int i = 0, j = n - 1, mid;
            while(i < j){
                mid = (i + j) / 2;
                if(nums[mid] > target)
                    j = mid - 1;
                else if(nums[mid]< target){
                    i = mid + 1;
                }else{
                    if(mid == n-1 || nums[mid+1] != nums[mid])
                        return mid;
                }
            }
            return -1;
        }
};