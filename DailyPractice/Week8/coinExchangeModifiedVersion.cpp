#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int recurse(vector<int> &coins, int amount, vector<int> &dp)
    {
        if (amount < 0)
            return INT_MAX;
        if (amount == 0)
        {
            return 0;
        }
        if (dp[amount] != 0)
        {
            return dp[amount];
        }
        int min_value = INT_MAX;
        for (int i = 0; i < coins.size(); i++)
        {
            int x = recurse(coins, amount - coins[i], dp);
            if (x == INT_MAX)
                continue;
            x += 1;
            if (min_value > x)
                min_value = x;
        }
        dp[amount] = min_value;
        return dp[amount];
    }

    int coinChange(vector<int> &coins, int amount)
    {
        vector<int> dp(amount + 1, 0);
        int x = recurse(coins, amount, dp);
        return x == INT_MAX ? -1 : x;
    }
};
int main(){
    vector<int> arr {3, 6, 3};
    cout << Solution().coinChange(arr, 5);
}