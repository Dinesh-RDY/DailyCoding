#include <bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int> &nums)
{

    int n = nums.size(), loc = 0, min = INT_MAX;
    if (n == 1)
        return;
    for (int i = n - 1; i >= 1; i--)
    {

        if (nums[i] > nums[i - 1])
        {
            loc = i;
            break;
        }
    }
    if (loc == 0)
    {
        for (int i = 0; i < n / 2; i++)
        {
            swap(nums[i], nums[n - i - 1]);
        }
        return;
    }
    int index = loc;
    for (int i = loc; i < n; i++)
    {
        if (nums[loc - 1] < nums[i])
            index = i;
    }
    swap(nums[index], nums[loc - 1]);
    sort(nums.begin() + loc, nums.end());
}