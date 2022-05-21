#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPowerOf2(long long n)
    {
        if (n == 0)
            return false;
        return (n & (n - 1)) == 0;
    }
};