#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans = 0 , sum = 0;
        unordered_set<int> ht;
        int n = nums.size();
        int j = 0 , i = 0;
        while(i < n - k + 1){
            if(j - i  == k){
                ans = max(ans, sum);
                sum -= nums[i];
                ht.erase(nums[i++]);
            }
            else if (ht.find(nums[j]) == ht.end()){
                sum += nums[j];
                ht.insert(nums[j++]);
            }else{
                sum -= nums[i];
                ht.erase(nums[i]);
                i++;
            }
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<int> v{1,5,4,2,9,9,9};
    cout << s.maximumSubarraySum(v, 3);
}