#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for(char c: s)
            mp[c]++;
        priority_queue<pair<int, char>> pq;
        for(pair<char,int> it : mp){
            pq.push(make_pair(it.second, it.first));
        }
        string ans;
        while(!pq.empty()){
            int n = pq.top().first;
            while(n--)
                ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};