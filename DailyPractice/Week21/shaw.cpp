#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> hats, int k){
    priority_queue<int> pq;
    for (int i = 0; i < hats.size(); i++){
        pq.push(hats[i]);
    }
    for (int i = 0; i < k; i++){
        int x = pq.top();
        pq.pop();
        x = sqrt(x);
        pq.push(x);
    }
    int ans = 0;
    while(!pq.empty()){
        ans += pq.top();
        pq.pop();
    }
    return ans;
}