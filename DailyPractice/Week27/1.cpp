#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
class Solution
{
public:
    int score(int target, vector<int>& dp, int a, int b)
    {
        if (target == 0)
            return 1;
        if (target < 0)
            return 0;
        if (dp[target] != -1)
            return dp[target];
        long long sum;
        sum =  score(target - a, dp, a, b) + score(target - b, dp, a, b);
        return dp[target] = (sum % (mod));
    }
    int countGoodStrings(int low, int high, int zero, int one)
    {
        vector<int> dp(high + 1, -1);

        int ans = 0;
        for (int i = low; i <= high; i++)
        {
            ans = ((ans % mod) + ( score(i, dp, one, zero) % mod )) % mod;
        }
        return ans;
    }
};

int main()
{
    cout << Solution().countGoodStrings(3, 3, 1, 1);
}