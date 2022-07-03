#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int k;
    cin >> k;
    int dp[n+1] = {0};
    dp[0] = 1, dp[1] = 1;
    for (int i = 2; i <=  k;i++){
        dp[i] = 2 * dp[i - 1];
    }
    for (int i = k + 1; i <= n;i++){
        dp[i] = 2*dp[i-1] - dp[i - k - 1];
    }
    for (int i = 0; i <= n; i++){
        cout << dp[i]<<" \n";
    }
}