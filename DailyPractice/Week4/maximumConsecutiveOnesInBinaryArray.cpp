#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int maxOnes(vector<int>& nums){
            int count = 0, max_count = 0;
            for (int i = 0; i < nums.size();i++){
                if(nums[i] == 0){
                    max_count = max(max_count, count);
                    count = 0;
                }else{
                    count++;
                }
            }
            return max_count > count ? max_count : count;
        }
};
int main(){
    vector<int> nums{0,1,0,1,1,0,1,1,1,1,0,0,0,1,1,1,1,1,1};
    cout << Solution().maxOnes(nums);
}