#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int n = nums.size(), loc = 0;
        for(int i = n-1; i>=1 ; i--){
            if(nums[i] > nums[i-1]){
                loc = i;
                break;
            }
        }
        if(loc == 0){
            reverse(nums.begin() , nums.end());
            return;
        }
        int index = loc;
        for(int i = loc; i < n ; i++){
            if(nums[i] > nums[loc-1]){
                index = i;
            }
        }
        swap(nums[index] , nums[loc-1] );
        sort(nums.begin()+loc , nums.end());
    }
};