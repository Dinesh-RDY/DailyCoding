#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int maxProfit(vector<int> nums){
            int min_so_far = nums[0], max_profit = -1;
            for (int i = 1; i < nums.size();i++){
                max_profit = max(max_profit, nums[i] - min_so_far);
                min_so_far = min(min_so_far, nums[i]);
            }
            return max_profit;
        }
};