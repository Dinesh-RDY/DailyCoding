#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<vector<int>>> dp(target + 1);
        for(int c : candidates){
            for (int i = c; i <= target ; i++){
                if(i == c){
                    dp[i].push_back({c});
                }else{
                    for(vector<int> temp : dp[i - c]){
                        temp.push_back({c});
                        dp[i].push_back(temp);
                    }
                }
            }
        }
        return dp[target];
    }
};