#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int titleToNumber(string columnTitle)
    {
        int n = columnTitle.size(), ans = 0;
        long long int pow = 1;

        for (int i = n - 1; i >= 0; i--)
        {

            ans += pow * (columnTitle[i] - 'A' + 1);
            pow *= 26;
        }
        return ans;
    }
};