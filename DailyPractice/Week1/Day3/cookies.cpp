#include<bits/stdc++.h>
using namespace std;
int cookies(int k, vector<int> nums) {
    sort(nums.begin(), nums.end(), greater<int> ());
    int count = 0;
    while(nums.size() > 0){
        int n = nums.size() - 1;
        int min_val = nums[n];
        if(min_val >= k){
            return count;
        }
        if(nums.size() ==  1 && nums[0] < k)
            return -1;
        int second = nums[n - 1];
        int cookie = min_val + second * 2;
        nums.pop_back();
        nums.pop_back();
        nums.push_back(cookie);
        sort(nums.begin(), nums.end(),greater<int> ());
        for(int x: nums) {
            cout << x << " ";
        }
        cout << endl;
        count++;
    }
    return count;
}
int main(){
    vector<int> k{2,7,3,6,4,8};
    cout << cookies(9, k);
}
