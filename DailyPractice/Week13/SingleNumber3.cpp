#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        int total = 0, setA = 0, setB = 0, n = nums.size();
        for (int i = 0; i < n; i++)
        {
            total = total ^ nums[i];
        }
        int last_set_bit = 0, temp = total;
        while ((temp & 1) == 0)
        {
            last_set_bit++;
            temp = temp >> 1;
        }
        int mask = 1 << last_set_bit;
        for (int i = 0; i < n; i++)
        {
            if (mask & nums[i])
            {
                setA = setA ^ nums[i];
            }
            else
            {
                setB = setB ^ nums[i];
            }
        }
        return {setA, setB};
    }
};