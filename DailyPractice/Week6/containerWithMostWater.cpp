#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int i = 0, j = height.size() - 1, ans = -1, cap;
        while (i < j)
        {
            cap = min(height[i], height[j]) * (j - i);
            ans = max(cap, ans);
            if (height[i] < height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return ans;
    }
};