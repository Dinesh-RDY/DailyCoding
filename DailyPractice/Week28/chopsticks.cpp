#include<bits/stdc++.h>
#define ll             long long int
#define F              first
#define S              second
#define pb             push_back
#define vi             vector <int>
#define pii            pair <int, int>
using namespace std;
class Solution{
    public:
    void solve(){
        int n, d;
        cin >> n >> d;
        vector<int> v(n);
        for (int i = 0; i < n; i ++){
            cin >> v[i];
        }
        sort(v.begin(), end(v));
        int count = 0;
        for (int i = 0; i < n - 1; i++){
            if(abs(v[i] - v[i + 1]) <= d)
                count++ , i++;
            else
                continue;
        }
        cout << count;
    }
};


int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    Solution s;
    int t;
    // cin >> t;
    // while(t--){
        s.solve();
        cout<<'\n';
    // }
}