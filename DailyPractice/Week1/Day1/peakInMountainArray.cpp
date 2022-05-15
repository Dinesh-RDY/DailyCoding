#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int peakIndexInMountainArray(vector<int> arr)
    {
        int l = 0, h = arr.size() - 1, mid;
        while (l < h)
        {
            mid = l + (h - l) / 2;
            if (arr[mid] > arr[mid + 1])
            {
                h = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        return l;
    }
};