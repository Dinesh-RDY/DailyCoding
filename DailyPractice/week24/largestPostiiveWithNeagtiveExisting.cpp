#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int maxi = -1;
        unordered_set<int> s;
        for(auto i : nums){
            if(s.find(i * -1) == s.end()){
                s.insert(i);
            }else{
                maxi = max(maxi, abs(i));
            }
        }
        return maxi == INT_MIN ? -1 : maxi;
    }
    int findMaxK1(vector<int>& nums){
            sort(nums.begin(), nums.end());
            int l = 0, h = nums.size() - 1;
            while(l < h){
                if(nums[l] + nums[h] == 0)
                    return nums[h];
                l++;
                h--;
            }
            return -1;
    }
};