#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maximumScore(int a, int b, int c)
    {
        int max_ele = max({a, b, c});
        int total = a + b + c;
        int othersSum = total - max_ele;
        return max_ele >= othersSum ? othersSum : total / 2;
    }
};
