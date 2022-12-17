#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n , 0);
        for(int i = 0 ; i < n ; i++){
            for(int j = 0; j  < i ; j++ ){
                if(nums[j] * nums[j] == nums[i]){
                    dp[i] = max(dp[i] , dp[j] + 1);
                }
            }
        }
        
        int maxi =  *max_element(dp.begin() , dp.end()) ;
        if(maxi == 0) return -1;
        return maxi;
    }
};
int main(){
    vector<int> v{2, 3, 4, 5, 6, 8};
    Solution().longestSquareStreak(v);
}