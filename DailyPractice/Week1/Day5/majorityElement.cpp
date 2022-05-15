#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int times = ceil(float(n)/2);
        unordered_map<int,int> mp;
        for(int i = 0 ;i < n ;i ++){
            int x = nums[i];
            if(x){
                mp[x]++;
            }else{
                mp[x] = 0;
            }
        }
        for(auto it = mp.begin() ; it!= mp.end(); it++){
            if(it->second >= times){
                return it->first;
            }
        }
        return -1;
    }
};