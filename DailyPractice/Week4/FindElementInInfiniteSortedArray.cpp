#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int find(vector<int> &nums, int target){
            if(nums[0] == target)
                return 0;
            int i = 1;
            while(nums[i] < target)
                i *= 2;
            int l = i / 2, h = i;
            while(i <= h){
                int mid = l + (h - l) / 2;
                if(nums[mid] > target)
                    h = mid - 1;
                else if(nums[mid] < target)
                    l = mid + 1;
                else
                    return mid;
            }
            return -1;
        }
};