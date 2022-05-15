#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        if (n < 1)
            return false;

        return (n & 0x55555555555) && !(n & n - 1);
    }
};