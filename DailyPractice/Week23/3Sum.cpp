#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // To make sure we dont have any duplicates 
        // we can even maintain a unordered_set then take all elements into a vector
        sort(begin(nums), end(nums));
        vector<vector<int>> ans;
        for (int k = 0; k < nums.size() - 2; k++){
            if(k!= 0 && nums[k] == nums[k-1]) continue;
            int i = k + 1, j = nums.size() - 1;
            if(nums[k] > 0)
                break;
            while(i < j){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == 0){
                    ans.push_back({nums[i], nums[j], nums[k]});
                    i++;
                    j--;
                    while(i < j && nums[i] == nums[i-1])
                        i++;
                    while(i < j && nums[j] == nums[j+1])
                        j--;
                }else if(sum > 0){
                    j--;
                }else{
                    i++;
                }
            }
        }
        return ans;
    }
};