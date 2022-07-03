#include <algorithm>
using namespace std;
int jump(vector<int> &nums)
{
    int ans = 0, l = 0, r = 0;
    while (r < nums.size() - 1)
    {
        int farthest = INT_MIN;
        for (int i = l; i <= r; i++)
        {
            farthest = max(farthest, i + nums[i]);
        }
        l = r + 1;
        r = farthest;
        ans++;
    }
    return ans;
}