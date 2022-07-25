#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> hashset;
        for(int i = 0 ; i < nums.size() - 2 ; i++){
            unordered_map<int , int> mp;
            for(int j = i +1 ; j < nums.size() ; j++){
                if(mp[-nums[i] - nums[j]]){
                 vector<int> temp =    {nums[i] , nums[j] ,nums[ mp[-nums[i] - nums[j]]]};
                sort(temp.begin() , temp.end());
                    if(hashset.find(temp) == hashset.end()){
                        ans.push_back(temp);
                        hashset.insert(temp);
                    }
                }
                else
                    mp[nums[j]] = j;
            }
        }
        return ans;
    }
};