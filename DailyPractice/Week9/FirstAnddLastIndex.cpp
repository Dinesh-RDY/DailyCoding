#include <bits/stdc++.h>
using namespace std;
pair<long, long> indexes(vector<long long> arr, long long x)
{
    // code here
    int first = -1, last = -1;
    int l = 0, h = arr.size() - 1, mid;
    while (l <= h)
    {
        mid = (h - l) / 2 + l;
        if (arr[mid] > x)
            h = mid - 1;
        else if (arr[mid] < x)
            l = mid + 1;
        else
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
    }
    if (first == -1)
        return make_pair(first, last);
    l = first, h = arr.size() - 1;
    while (l <= h)
    {
        mid = (h - l) / 2 + l;
        if (arr[mid] > x)
        {
            h = mid - 1;
        }
        else if (arr[mid] < x)
        {
            l = mid + 1;
        }
        else
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
    }
    return make_pair(first, last);
}