#include <vector>
using namespace std;
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int r = matrix.size(), c = matrix[0].size(), i = 0;
        while (i < r && matrix[i][c - 1] < target)
            i++;
        if (i == r)
            return false;
        int l = 0, h = c - 1, mid;
        while (l <= h)
        {
            mid = (h - l) / 2 + l;
            if (matrix[i][mid] == target)
                return true;
            else if (matrix[i][mid] < target)
                l = mid + 1;
            else
                h = mid - 1;
        }

        return false;
    }
};