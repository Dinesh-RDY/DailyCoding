#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> s(nums.begin() , nums.end());
        for(auto i : nums){
            int num = 0;
            while(i){
                int rem = i % 10;
                num = num * 10 + rem;
                i /= 10;
            }
            if(s.find(num) == s.end()){
                s.insert(num);
            }
        }
        return s.size();
    }
};