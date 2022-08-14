#include <vector>
using namespace std;
// Here the idea is to use two pointers the secondpointer is going to remember the
// zero locations only
// thus when ever we find a non zero element we swap it with sp and increment it
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int sp = 0;
        for (int i = 0; i < nums.size(); i++)
            if (nums[i] != 0)
            {
                swap(nums[i], nums[sp]);
                sp++;
            }
    }
};