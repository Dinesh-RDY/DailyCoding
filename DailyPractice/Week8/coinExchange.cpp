#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int min_coins = INT_MAX;
    void recurse(vector<int> &coins, int amount, int n, vector<int> &dp)
    {
        if (amount < 0)
            return;
        if (amount == 0)
        {
            min_coins = min(min_coins, n);
            return;
        }
        if (dp[amount] != 0)
        {
            min_coins = min(min_coins, n + dp[amount]);
            return;
        }
        for (int i = 0; i < coins.size(); i++)
        {
            recurse(coins, amount - coins[i], n + 1, dp);
            dp[amount] = min_coins;
        }
    }
    int coinChange(vector<int> &coins, int amount)
    {
        vector<int> dp(amount + 1, 0);
        recurse(coins, amount, 0, dp);
        if (min_coins == INT_MAX)
            return -1;
        else
            return dp[amount];
    }
};

int main()
{
    vector<int> coins{1, 2, 5};
    cout << Solution().coinChange(coins, 11);
}