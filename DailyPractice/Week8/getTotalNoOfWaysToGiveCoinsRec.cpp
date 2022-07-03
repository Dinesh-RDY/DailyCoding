#include<bits/stdc++.h>
using namespace std;
int recurse(int sum , int coins[] , int n, int dp[]){
    int x = 0;
    if(sum < 0)
        return 0;
    if(sum == 0)
        return 1;
    if(dp[sum] != 0)
        return dp[sum];
    for (int i = 0; i < n;i++){
        int y = recurse(sum - coins[i], coins, n , dp);
        if(y == 0)
            break;
        else
            x += y;
    }
    return dp[sum] = x;
}
int main(){
    int coins[]{1, 2 , 3, 6};
    int dp[1001] = {0};
    cout << recurse(6, coins, sizeof(coins)/sizeof(int) , dp);
}