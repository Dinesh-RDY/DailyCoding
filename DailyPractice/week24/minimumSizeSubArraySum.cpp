#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0, sum = 0 , min_length = INT_MAX;
        for (int j = 0; j < nums.size(); j++){
            sum += nums[j];
            while(sum >= target){
                min_length = min(min_length, j - i + 1);
                sum -= nums[i++];
            }
        }
        return min_length;
    }
};