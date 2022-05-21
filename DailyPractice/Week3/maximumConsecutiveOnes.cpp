#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int maxConsecutiveOnes(vector<int>& nums){
            int ans = 0, count = 0;
            for (int i = 0; i < nums.size(); i++){
                if(nums[i] == 0){
                    count = 0;
                    continue;
                }
                count++;
                ans = max(ans, count);
            }
            return count;
        }
};