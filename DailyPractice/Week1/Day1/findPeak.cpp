#include<bits/stdc++.h>
using namespace std;
//Naive Solution O(N)
int findPeakElement(vector<int> &nums)
{
    if (nums[0] > nums[1])
        return 0;
    int n = nums.size();
    if (nums[n - 1] > nums[n - 2])
        return n - 1;
    for (int i = 1; i <= n - 2; i++)
    {
        if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1])
        {
            return i;
        }
    }
    return -1;
}
// O (Log n) implementation using binary Search.
int findPeakElement2(vector<int> &nums)
{
    int l = 0, h = nums.size() - 1, mid;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (mid == 0 || mid == nums.size() - 1 || (nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1]))
        {
            return mid;
        }
        else if (nums[mid] > nums[l])
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> v{1, 2, 3, 1};
    cout << findPeakElement2(v);
}