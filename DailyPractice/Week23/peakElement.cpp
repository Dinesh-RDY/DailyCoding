#include<bits/stdc++.h>
using namespace std;
// Strict Binary Search
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0 , h = nums.size() - 1, mid;
        while(l <= h){
            mid = (l +h)/2;
            if((mid == 0 || nums[mid - 1] < nums[mid]) && (mid == nums.size() - 1 || nums[mid] > nums[mid+1]))
                return mid;
            else if(mid > 0 && nums[mid] < nums[mid-1])
                h = mid -1;
            else
                l = mid + 1;
        }
        return -1;
    }
};
// Predicate Framework
class Solution1 {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        while (l < r) {
            int mid = (l + r) / 2;
            if (nums[mid] > nums[mid + 1])
                r = mid;
            else
                l = mid + 1;
        }
        return l;
    }
};