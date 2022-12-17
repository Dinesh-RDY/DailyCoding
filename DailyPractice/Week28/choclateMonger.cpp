#include<bits/stdc++.h>
#define ll             long long int
#define F              first
#define S              second
#define pb             push_back
#define vi             vector <int>
#define pii            pair <int, int>
#define rep(n) for (int i = 0; i < n ; i++)
using namespace std;
class Solution{
    public:
    void solve(){
        int n, x;
        cin >> n >> x;
        unordered_set<int> ht;
        rep(n){
            int temp;
            cin >> temp;
            ht.insert(temp);
        }
        cout << min((int)ht.size(), n - x);
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