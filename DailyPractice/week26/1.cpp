#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long totalCost(vector<int> &nums, int k, int can)
    {
        long long ans = 0;
        if (nums.size() == 1)
            return nums[0];
        priority_queue<int, vector<int>, greater<int>> pq1;
        priority_queue<int, vector<int>, greater<int>> pq2;
        int start = 0, end = nums.size() - 1;
        for (int i = 1; i <= can; i++)
        {
            if (i - 1 >= nums.size() - i)
                break;
            pq1.push(nums[i - 1]);
            start = i;
            pq2.push(nums[nums.size() - i]);
            end = nums.size() - i - 1;
        }
        bool flag = 1;
        for (int i = 0; i < k; i++)
        {
            if (start > end)
                flag = 0;
            int a = !pq1.empty() ? pq1.top() : INT_MAX;
            int b = !pq2.empty() ? pq2.top() : INT_MAX;
            if (a <= b)
            {
                ans += a;
                pq1.pop();
                if (flag)
                    pq1.push(nums[start++]);
            }
            else
            {
                ans += b;
                pq2.pop();
                if (flag)
                    pq2.push(nums[end--]);
            }
        }
        return ans;
    }
};