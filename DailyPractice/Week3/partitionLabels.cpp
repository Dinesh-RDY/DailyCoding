#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> hash(26 , 0);
        for(int i =0;i< s.length();i++){
            hash[s[i] - 'a'] = i;
        }
        int maxIndex = -1;
        int lastIdx = 0;
        vector<int> result;
        for(int i= 0; i < s.length();i++){
            maxIndex= max(maxIndex , hash[s[i] - 'a']);
            if(maxIndex == i){
                result.push_back(maxIndex - lastIdx +1);
                lastIdx = i+1;
            }
            
        }
        return result;
    }
};