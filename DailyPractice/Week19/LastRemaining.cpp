#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lastRemaining(int n)
    {
        int fp = 1, step = 1;
        bool direction = true;
        while (n > 1)
        {
            if (direction)
            {
                fp += step;
            }
            else
            {
                fp += n % 2 == 0 ? 0 : step;
            }
            step *= 2;
            n /= 2;
            direction = !direction;
        }
        return fp;
    }
};