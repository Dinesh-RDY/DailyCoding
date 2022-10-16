#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        // priority_queue<pair<int,int>> pq;
        // for (int i = 1; i < nums.size();i++){
        //     pq.push({nums[i], i});
        // }
        // auto temp = pq.top();
        // while(temp.first > nums[temp.second]){
        //     temp = pq.top();
        //     pq.pop();
        //     temp.first--;
        //     nums[temp.second]++;
        //     pq.push(temp);
        // }
        // return temp.first;
        int loc = max_element(nums.begin(), nums.end()) - nums.begin();
        if(loc == 0) return nums[0];
        else{
            int mini = min_element(nums.begin() + 1, nums.end()) - nums.begin();
            return (mini+nums[0]) / 2;
        }
    }
};
int main(){
    vector<int> v({6,9,3,8,14});
    cout << Solution().minimizeArrayValue(v);
}