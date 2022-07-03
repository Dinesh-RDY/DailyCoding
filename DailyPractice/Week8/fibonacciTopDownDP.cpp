#include <bits/stdc++.h>
using namespace std;
int topDownFibonacci(int n, int dp[])
{
    if (n == 0 || n == 1)
        return n;
    if (dp[n] != 0)
        return dp[n];
    dp[n] = topDownFibonacci(n - 1, dp) + topDownFibonacci(n - 2, dp);
    return dp[n];
}
int main(){
    int dp[16] = {0};
    dp[1] = 1;
    int x = topDownFibonacci(15, dp);
    for (int i = 0; i < 16;i++){
        cout << dp[i] << " ";
    }
}
