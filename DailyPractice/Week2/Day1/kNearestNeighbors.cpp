#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for(int i : arr){
            pq.push(make_pair(abs(i-x), i));
        }
        vector<int> ans(k);
        for (int i = 0; i < k;i++){
            ans[k - i -1] = pq.top().second;
            pq.pop();
        }
        return ans;
    }
};