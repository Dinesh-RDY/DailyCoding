#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int gcd(int a, int b)
    {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
    int subarrayGCD(vector<int> &nums, int k)
    {
        int count = 0, i = 0, curr_gcd;

        for (int i = 0; i < nums.size(); i++)
        {
            curr_gcd = 0;
            for (int j = i; j < nums.size(); j++)
            {
                curr_gcd = gcd(curr_gcd, nums[j]);
                count += (curr_gcd == k);
            }
        }
        return count;
    }
};