#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> twoSum(vector<int>& nums , int target){
            unordered_map<int, int> mp;
            for (int i = 0; i < nums.size();i++)
            {
                if(mp.find(target - nums[i]) == mp.end()){
                    mp.insert({nums[i] , i});
                }else{
                    return {i, mp[target - nums[i]]};
                }
            }
            return {-1};
        }
};