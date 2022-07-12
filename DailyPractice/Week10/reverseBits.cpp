#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    uint32_t reverseBits(uint32_t n)
    {
        int bit = 0, res = 0;
        for (int i = 0; i < 32; i++)
        {
            int bit = (n >> i) & 1;
            res = res | (bit << (31 - i));
        }
        return res;
    }
};