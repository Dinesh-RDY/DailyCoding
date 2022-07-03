#include <bits/stdc++.h>
using namespace std;
vector<int> topK(vector<int> &nums, int k)
{
    // Code here
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }
    priority_queue<pair<int, int>> pq;
    vector<int> ans;
    for (auto x : mp)
    {
        pq.push(make_pair(x.second, x.first));
    }
    while (k--)
    {
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;
}