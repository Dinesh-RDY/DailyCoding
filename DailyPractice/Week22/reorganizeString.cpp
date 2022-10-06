#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int> mp;
        for(char c: s){
            mp[c]++;
        }
        string ans;
        while(mp.size() != 0){
            for(auto it : mp){
                if(ans.back() == it.first)
                    return "";
                ans.push_back(it.first);
                it.second--;
                if(it.second == 0)
                    mp.erase(it.first);
            }
        }
        return ans;
    }
};