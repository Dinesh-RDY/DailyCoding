#include <vector>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int i = 1, sp = 1;
        while (i < nums.size())
        {
            if (nums[i] != nums[i - 1])
            {
                nums[sp] = nums[i];
                sp++;
            }
            i++;
        }
        return sp;
    }
};