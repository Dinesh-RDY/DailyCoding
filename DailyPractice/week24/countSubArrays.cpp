#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long count = 0;
        int i = 0, j = 0;
        int mini = INT_MAX, maxi = INT_MIN;
        while(j < nums.size()){
            if(mini == minK && maxi == maxK){
                count++;
            }
            mini = min(mini, nums[j]);
            maxi = max(maxi, nums[j]);
            
            j++;
        }
        return count;
    }
};
int main(){
    vector<int> v{1, 3, 5, 2, 7, 5};
    Solution s;
    cout << s.countSubarrays(v, 1, 5);
}