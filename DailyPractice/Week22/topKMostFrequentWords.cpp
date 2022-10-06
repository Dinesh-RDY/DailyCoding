#include<bits/stdc++.h>
using namespace std;
class Comparator{
    public:
    // Remember this hase to be operator() (types of values) then function body
    bool operator() (pair<int, string> &a, pair<int, string> &b){
        if(a.first != b.first)
            return a.first < b.first;
        return a.second > b.second;
    }
};
class Solution {
public:
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;
        for (int i = 0; i < words.size(); i++)
            mp[words[i]]++;
        priority_queue<pair<int, string> , vector<pair<int, string>> , Comparator> pq;
        for(auto it : mp){
            pq.push({it.second, it.first});
        }
        vector<string> ans(k);
        for (int i = 0; i < k; i++)
        {
            ans[i] = pq.top().second;
            pq.pop();
        }
        return ans;
    }
};