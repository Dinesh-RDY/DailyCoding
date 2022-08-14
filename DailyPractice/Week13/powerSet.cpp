#include <vector>
using namespace std;
class Solution
{
public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> v;
        int p = 1 << nums.size();
        for (int i = 0; i < p; i++)
        {
            vector<int> temp;
            for (int j = 0; j < nums.size(); j++)
            {
                if (i & (1 << j))
                {
                    temp.push_back(nums[j]);
                }
            }
            v.push_back(temp);
        }
        return v;
    }
};