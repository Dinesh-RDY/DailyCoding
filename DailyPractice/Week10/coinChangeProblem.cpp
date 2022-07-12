#include <vector>
#include <limits.h>
using namespace std;
class Solution
{
public:
    int recurse(vector<int> &coins, int dp[], int amount)
    {
        if (amount < 0)
            return INT_MAX;
        if (amount == 0)
            return 0;
        if (dp[amount])
            return dp[amount];
        int min_value = INT_MAX;
        for (int i = 0; i < coins.size(); i++)
        {
            int x = recurse(coins, dp, amount - coins[i]);
            if (x == INT_MAX)
                continue;
            x++;
            if (min_value > x)
                min_value = x;
        }
        return dp[amount] = min_value;
    }
    int coinChange(vector<int> &coins, int amount)
    {
        int dp[amount + 1];
        for (int i = 0; i <= amount; i++)
            dp[i] = 0;
        int x = recurse(coins, dp, amount);
        if (x == INT_MAX)
            return -1;
        return x;
    }
};