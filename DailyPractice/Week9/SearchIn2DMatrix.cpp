#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &arr, int target)
    {
        int rows = arr.size(), cols = arr[0].size();
        int where = -1;
        int l = 0, h = rows - 1, mid;
        while (l <= h)
        {
            mid = (h - l) / 2 + l;
            if (arr[mid][0] <= target && arr[mid][cols - 1] >= target)
            {
                where = mid;
                break;
            }
            else if (arr[mid][0] >= target)
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (where == -1)
            return false;
        l = 0, h = cols - 1, mid;
        while (l <= h)
        {
            mid = (h - l) / 2 + l;
            if (arr[where][mid] > target)
                h = mid - 1;
            else if (arr[where][mid] < target)
                l = mid + 1;
            else
                return true;
        }
        return false;
    }
};