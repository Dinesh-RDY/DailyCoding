#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int stones[n];
    for (int i = 0; i < n; i++){
        cin >> stones[i];
    }
    int dp[n];
    dp[0] = 0;
    dp[1] = abs(stones[1] - stones[0]);
    for (int i = 2; i < n; i++){
        dp[i] = min(dp[i - 1] + abs(stones[i - 1] - stones[i]),
                    dp[i - 2] + abs(stones[i - 2] - stones[i]));
    }
    cout << dp[n - 1];
}