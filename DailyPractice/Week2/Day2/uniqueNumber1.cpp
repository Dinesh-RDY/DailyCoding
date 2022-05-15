#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int ans = 0;
        for(int ele : arr){
            ans = (ans ^ ele);
        }     
        return ans;
    }
};