#include <limits.h>
class Solution
{
public:
    int reverse(int x)
    {
        bool flag = x < 0;
        if (x == INT_MIN)
            return 0;
        if (flag)
            x *= -1;
        int sum = 0;
        while (x)
        {
            int l = x % 10;
            if (sum > INT_MAX / 10)
                return 0;
            sum = sum * 10 + l;
            x = x / 10;
        }
        if (flag)
            sum *= -1;
        return sum;
    }
};