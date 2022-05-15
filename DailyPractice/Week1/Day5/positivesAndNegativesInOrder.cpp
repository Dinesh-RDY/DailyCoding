#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int p = 0 , n = 0;
        int size = nums.size();
        int i = 0;
        while(p != size && n!= size && i < n){
            while(nums[p] < 0){
                p++;
            }
            while(nums[n] > 0){
                n++;
            }
            if(nums[i] < 0 && i %2 ==0){
                swap(nums[i], nums[p]);
                i++;
            }else if(nums[i] > 0 && i % 2 != 0){
                swap(nums[i] , nums[n]);
                i++;
            }else{
                i++;
            }
        }
        return nums;
    }
};
int main(){
    vector<int> v{3, 1, -2, -5, 2, 4};
    v = Solution().rearrangeArray(v);
}