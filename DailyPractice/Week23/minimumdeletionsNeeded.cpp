#include<bits/stdc++.h>
using namespace std;
// Approach Greedy :- 
class Solution {
public:
    int minDeletions(string s) {
        int freq[26] {0};
        for(char c: s)
            freq[c - 'a']++;
        unordered_set<int> ht;
        int ans = 0;
        for(int i = 0 ; i < 26 ; i++){
            if(freq[i]){
            if(ht.find(freq[i]) == ht.end()){
                ht.insert(freq[i]);
            }else{
                while(ht.find(freq[i]) != ht.end()){
                    freq[i]--;
                    ans++;
                }
                if(freq[i] != 0){
                    ht.insert(freq[i]);
                } 
            }
            }
        }
        return ans;
    }
};