#include <bits/stdc++.h>
using namespace std;
int totalWays(int coins[], int n, int value)
{
    int dp[value + 1]{0};
    dp[0] = 1;
    for (int i = 1; i <= value; i++)
    {
        for (int j = 0; j < n;j++){
            if(coins[j] <= i){
                dp[i] += dp[i - coins[j]];
            }
        }
    }
    return dp[value];
}
int main(){
    int coins[]{1, 2, 3};
    cout << totalWays(coins, 3, 4);
}