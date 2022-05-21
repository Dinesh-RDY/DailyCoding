#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        bool isPresent(string s1, string s2){
            vector<int> freq(26, 0);
            unordered_map<char, bool> mp;
            for(char c: s1){
                freq[c - 'a']++;
                mp[c] = true;
            }
            int i = 0, j = 0, need = s1.length(), having = 0;
            while(j < s2.length()){
                if(having == need){
                    return true;
                }
                 
            }
            return false;
        }
};