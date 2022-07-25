#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int start = 0, end = height.size() - 1, res = -1;
        while (start < end)
        {
            res = max(res, (end - start) * min(height[start], height[end]));
            if (height[start] < height[end])
                start++;
            else
                end--;
        }
        return res;
    }
};