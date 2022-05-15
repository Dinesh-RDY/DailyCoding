#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<vector<int>> threeSum(vector<int>& nums){
            if(nums.size() < 3)
                return {};
            sort(nums.begin(), nums.end());
            int n = nums.size();
            vector<vector<int>> ans;
            for (int a = 0; a < n - 2;a++){
                if(nums[a] > 0)
                    break;
                int A = nums[a];
                if(a > 0 && nums[a-1] == A){
                    continue;
                }
                for (int b = a + 1, c = n - 1; b < c;)
                {
                    int B = nums[b];
                    int C = nums[c];
                    int sum = A + B + C;
                    if(sum == 0){
                        ans.push_back({A, B, C});
                        
                        while(b < c && nums[b] == B){
                            b++;
                        }
                        while(b < c && nums[c] == C){
                            c--;
                        }
                    }
                    else{
                        if(sum > 0){
                            c--;
                        }else{
                            b++;
                        }
                    }
                }
                
            }
            return ans;
        }
};