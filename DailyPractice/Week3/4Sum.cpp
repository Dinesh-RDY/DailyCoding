#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        if(n < 4){
            return {};
        }
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i = 0; i < n;i++){
            for (int j = i + 1; j < n;j++){
                int l = j + 1, h = n - 1;
                int target1 = target - (nums[i] + nums[j]);
                while(l < h){
                    if(nums[l] + nums[h] == target1) {
                        ans.push_back({nums[i], nums[j], nums[l], nums[h]});
                        l++, h--;
                        while(l < h && nums[l] == nums[l-1])
                            l++;
                        while(l < h  && nums[h] == nums[h+1])
                            h--;
                    }else if(nums[l] + nums[h] < target1){
                        l++;
                    }else{
                        h--;
                    }
                }
             
                while(j+1 < n && nums[j] == nums[j+1])
                    j++;
            }
            while(i+1 < n && nums[i] == nums[i+1])
                i++;
        }
        return ans;
    }
};