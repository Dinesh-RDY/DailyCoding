#include<bits/stdc++.h>
using namespace std;
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
int main(){
    vector<int> v{1, 2, 3, 1};
    findPeakElement(v);
}