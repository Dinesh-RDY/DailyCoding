#include <vector>
#include <unordered_set>
using namespace std;
class Solution
{
public:
    int findMaximumXOR(vector<int> &nums)
    {
        int res = 0, mask = 0;
        for (int i = 31; i >= 0; i--)
        {
            unordered_set<int> s;
            mask |= (1 << i);
            int temp = res | (1 << i);
            for (int x : nums)
                s.insert(x & mask);
            for (int x : s)
            {
                if (s.count(temp ^ x))
                {
                    res = temp;
                    break;
                }
            }
        }
        return res;
    }
};