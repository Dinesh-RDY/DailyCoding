#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int trailingZeroes(int n)
    {
        if (n < 5)
            return 0;
        int res = 0;
        for (int i = 5; i <= n; i *= 5)
        {
            res = res + (n / i);
        }
        return res;
    }
};