#include<bits/stdc++.h>
using namespace std;

int totalPossibleWays(int n,int k, int dp[]){
    if(n <0)
        return 0;
    if(n < 2)
        return 1;
    if(dp[n] != 0)
        return dp[n];
    for (int i = 0; i < k;i++){
        dp[n] += totalPossibleWays(n - i - 1, k, dp);
    }
    return dp[n];
}
int main(){
    int dp[7] = {0};
    cout << totalPossibleWays(7, 3, dp);
}