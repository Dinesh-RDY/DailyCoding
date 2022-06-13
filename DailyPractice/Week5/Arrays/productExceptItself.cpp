#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        int n = nums.size();
        vector<long long int> suffix(n);
        suffix[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0;i--){
            suffix[i] = suffix[i + 1] * nums[i];
        }
        int prod_so_far = 1;
        vector<long long int> answer(n);
        answer[0] = suffix[1];
        for (int i = 1; i < n-1;i++){
            prod_so_far *= nums[i - 1];
            answer[i] = suffix[i + 1] * prod_so_far;
        }
        answer[n - 1] = prod_so_far * nums[n-2];
        return answer; 
    }
};