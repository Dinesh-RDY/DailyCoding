#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int> leaders(vector<int>& nums){
            int n = nums.size();
            int leader = nums[n - 1];
            vector<int> leaders;
            leaders.push_back(leader);
            for (int i = n - 2; i >= 0;i--){
                if(nums[i] > leader){
                    leader = nums[i];
                    leaders.push_back(leader);
                }
            }
            return leaders;
        }
};

int main(){
    vector<int> nums{8, 7, 3, 6, 2, 5};
    vector<int> v = Solution().leaders(nums);
    for(int e: v)
        cout << e << " ";
}