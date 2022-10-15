#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0 , h = nums.size() -1, mid;
        if(nums[l] < nums[h]) return nums[l];
        while(l < h){
            mid = (l + h)/2;
            if(nums[mid] >= nums[0]){
                l = mid + 1;
            }else{
                h = mid;
            }
        }
        return nums[l];
    }
};