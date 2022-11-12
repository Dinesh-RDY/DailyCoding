#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    priority_queue<int> pq;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        pq.push(temp);
    }
    int ans = 0;
    while(pq.size() > k){
        int x = pq.top();
        pq.pop();
        x--;
        if(x != 0)
            pq.push(x);
        ans++;
    }
    cout << ans << endl;
}