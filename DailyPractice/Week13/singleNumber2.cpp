#include <vector>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        vector<int> v(32, 0);
        for (int i = 0; i < 32; i++)
        {
            int mask = 1 << i;
            for (int x : nums)
            {
                if (x & mask)
                    v[i]++;
            }
            v[i] = v[i] % 3;
        }
        int ans = 0;
        for (int i = 0; i < 32; i++)
        {
            ans += (v[i] << i);
        }
        return ans;
    }
};