#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007;
// Top Down 
int recurse(int score, int dp[])
{
    if (score == 0)
        return 1;
    if (score < 0)
        return 0;
    if (dp[score])
        return dp[score];
    int x = recurse(score - 2, dp) % MOD;
    int y = recurse(score - 3, dp) % MOD;
    return dp[score] = (x + y) % MOD;
}
int totalWaysBottomUp(int score){
    int* dp = new int[score + 1];
    
    dp[0] = 1 ,dp[1] = 0, dp[2] = 1;
    for (int i = 3; i <= score;i++){
        dp[i] = ( dp[i - 3]  + dp[i - 2] ) % MOD;
    }
    int x = dp[score] % MOD;
    delete[] dp;
    return x;
}
int main()
{
    int score = 10000000;
    // int *dp = new int[score + 1];
    // for (int i = 0; i < score + 1; i++)
    // {
    //     dp[i] = 0;
    // }
    // cout << recurse(score, dp) << "recurse \n";
    cout << totalWaysBottomUp(score) << "Tabulation \n";
    // delete[] dp;
}