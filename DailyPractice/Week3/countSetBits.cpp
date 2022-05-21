#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countSetBits(int n)
    {
        if (n <= 1)
            return n;
        int power = 0;
        while ((1 << power) <= n)
        {
            power += 1;
        }
        power -= 1;

        return (1 << power - 1) * power + (n - (1 << power) + 1) + countSetBits(n - (1 << power));
    }
};