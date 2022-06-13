#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n < 1) return -1;
        int l = 0 , h  = nums.size()-1;
        while(l <= h){
           int  mid= (l+h)/2;
            if((mid == 0 || nums[mid-1] <= nums[mid]) &&
               (mid == n-1 || nums[mid+1]<= nums[mid]))
                return mid;
            if(mid < n -1 && nums[mid+1] >= nums[mid])
                l = mid+1;
            else 
                h = mid-1;
        }
        return -1;
    }
};