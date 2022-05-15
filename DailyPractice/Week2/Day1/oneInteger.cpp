#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &nums)
{
    priority_queue<int, vector<int>, greater<int>> pq(nums.begin(), nums.end());

    int sum = 0;
    while (pq.size() != 1)
    {
        int i = pq.top();
        pq.pop();
        int j = pq.top();
        pq.pop();
        sum += i + j;
        pq.push(i + j);
    }
    return sum;
}