#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int maxLength(vector<int>& nums){
            int max_length = 0, count , i = 0;
            while(i < nums.size()){
                int k = nums[i] % 2;
                count = 0;
                while(i < nums.size() && nums[i] %2 == k){
                    count++;
                    i++;
                }
                max_length = max(count, max_length);
            }
            return max_length;
        }
};
int main(){
    vector<int> v{1,1,3,6,6,4,2,5,4};
    cout << Solution().maxLength(v);
}