#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<pair<int, int>> frequencies(vector<int>& nums){
            int count = 0 , i = 0;
            vector<pair<int, int>> ans;
            while(i < nums.size()){
                count = 1;
                while(i < nums.size() && nums[i] == nums[i+1]){
                    count++;
                    i++;
                }
                ans.push_back(make_pair(nums[i], count));
                i++;
            }
            return ans;
        }
};

int main(){
    vector<int> nums{1, 1, 1, 2, 3, 4, 5, 6, 6, 6, 6, 6, 7};
    vector<pair<int, int>> ans = Solution().frequencies(nums);
    for(auto x : ans){
        cout << x.first << " " << x.second << endl;
    }
}