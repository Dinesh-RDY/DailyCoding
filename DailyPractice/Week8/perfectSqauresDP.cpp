#include <vector>
#include <limits.h>
using namespace std;
class Solution
{
public:
    int numSquares(int n)
    {
        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0;
        // we are filling the dp array with the minimum number of perfect square
        // required to sum up to 1 , 2, 3, 4, ... , n  then we return dp[n]
        // for example for sq = 4 first we try using 1s we have dp[3] + 1
        // then we try using 2 we have dp[0] + 1 then the minimum of these vals is 1
        // so we will fill dp[4] with 1 then in future we will use this value
            for (int sq = 1; sq <= n; sq++)
            {
                for (int i = 1; i * i <= sq; i++)
                {
                    dp[sq] = min(dp[sq], dp[sq - (i * i)] + 1); 
                }
            }
            return dp[n];
    }
};