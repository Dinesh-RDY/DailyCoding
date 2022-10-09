#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs){
        unordered_map<int, int> mp;
        mp.insert(make_pair(logs[0][0], logs[0][1]));
        int prev = logs[0][1];
        for (int i = 1; i < logs.size(); i++){
            vector<int> &v = logs[i];
            mp[v[0]] = max(mp[v[0]] ,(v[1] - prev));
            prev = v[1];
        }
        int ans = -1, person = -1;
        for(auto it: mp){
            if(ans < it.second){
                ans = it.second;
                person = it.first;
            }else if(ans == it.second){
                person = min(person, it.first);
            }
        }
        return person;
    }
};