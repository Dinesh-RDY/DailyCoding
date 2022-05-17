#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int trap(vector<int> &heights)
    {

        int n = heights.size();
        if (n < 2)
            return 0;
        int i = 0, j = n - 1, count = 0, previous = 0, previousj = 0;

        while (i < j)
        {
            previous = max(previous, heights[i]);
            previousj = max(previousj, heights[j]);
            if (heights[i] > heights[j])
            {
                count += (previousj - heights[j]);
                j--;
            }
            else
            {
                count += (previous - heights[i]);
                i++;
            }
        }
        return count;
    }
};