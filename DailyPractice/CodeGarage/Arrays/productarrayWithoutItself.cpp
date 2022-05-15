#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> suffix(n);
        suffix[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            suffix[i] = suffix[i + 1] * nums[i];
        }
        int prod_so_far = 1;
        vector<int> answer(n);
        answer[0] = suffix[1];
        for (int i = 1; i < n - 1; i++)
        {
            prod_so_far *= nums[i - 1];
            answer[i] = suffix[i + 1] * prod_so_far;
        }
        answer[n - 1] = prod_so_far * nums[n - 2];
        return answer;
    }
};