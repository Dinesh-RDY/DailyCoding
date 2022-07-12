// Total number of ways to climb stairs using 1 or 2 steps
class Solution
{
public:
    int climbStairs(int n)
    {
        if (n == 1)
            return n;
        int a = 1, b = 2;
        for (int i = 2; i < n; i++)
        {
            int temp = a + b;
            a = b;
            b = temp;
        }
        return b;
    }
};