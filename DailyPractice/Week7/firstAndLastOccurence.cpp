#include <algorithm>
#include <vector>
using namespace std;
pair<long, long> indexes(vector<long long> arr, long long x)
{
    // code here

    int l = 0, h = arr.size() - 1, mid, last = -1, first = -1;
    while (l <= h)
    {
        mid = (h - l) / 2 + l;
        if (arr[mid] == x)
        {
            if (mid == arr.size() - 1 || arr[mid] != arr[mid + 1])
            {
                last = mid;
                break;
            }
            else
            {
                l = mid + 1;
            }
        }
        else if (arr[mid] > x)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    if (last == -1)
        return {-1, -1};
    l = 0, h = arr.size() - 1;
    while (l <= h)
    {
        mid = (h - l) / 2 + l;
        if (arr[mid] == x)
        {
            if (mid == 0 || arr[mid] != arr[mid - 1])
            {
                first = mid;
                break;
            }
            else
            {
                h = mid - 1;
            }
        }
        else if (arr[mid] > x)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return {first, last};
}