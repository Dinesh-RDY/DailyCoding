#include<bits/stdc++.h>
#define ll             long long int
#define F              first
#define S              second
#define pb             push_back
#define vi             vector <int>
#define pii            pair <int, int>
#define rep(n) for (int i = 0; i < n; i++)
using namespace std;
class Solution{
    public:
    void solve(){
        int n, k;
        cin >> n >> k;
        vi arr(n);
        rep(n){
            cin >> arr[i];
        }
        sort(begin(arr), end(arr));
        int mini = INT_MAX;
        for (int i = 0; i < n - k + 1; i++){
            mini = min(mini, arr[i + k - 1] - arr[i]);
        }
        cout << mini;
    }
};


int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    Solution s;
    int t;
    cin >> t;
    while(t--){
        s.solve();
        cout<<'\n';
    }
}