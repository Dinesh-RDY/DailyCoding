#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int binarySearch(vector<int>& nums, int l , int h, int target){
        int mid;
        while(l <= h){
            mid = (l + h) / 2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) h = mid - 1;
            else l = mid + 1;
        }
        return -1;
    }
    int longestSquareStreak(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        vector<int> dp(n , 0);
        for(int i = 0 ; i < n ; i++){
            int a = sqrt(nums[i]);
            if(a * a != nums[i]) continue;
            int index = binarySearch(nums , 0 , i , a);
            if(index != -1)
                dp[i] = dp[index] + 1;
        }
        int maxi =  *max_element(dp.begin() , dp.end()) ;
        if(maxi == 0) return -1;
        return maxi + 1;
    }
};