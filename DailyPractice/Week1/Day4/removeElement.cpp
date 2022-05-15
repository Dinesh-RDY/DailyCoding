#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int removeElement(vector<int> &nums, int k)
    {
        int end = nums.size() - 1;
        for (int i = 0; i < nums.size() - end; i++)
        {
            while (nums[end] == k)
            {
                end--;
            }
            if (nums[i] == k)
            {
                swap(nums[i], nums[end]);
            }
        }
        return end;
    }
};
int removeElement(vector<int> &nums, int k)
{
    int end = nums.size() - 1;
    for (int i = 0; i < nums.size() && i <= end; i++)
    {
        while (nums[end] == k)
        {
            end--;
        }
        if (nums[i] == k && end >= 0)
        {
            swap(nums[i], nums[end]);
        }
    }
    return end + 1;
}

int main()
{
    vector<int> v{1};
    cout << removeElement(v, 1);
}