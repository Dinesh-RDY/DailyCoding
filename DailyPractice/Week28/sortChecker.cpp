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
        int n;
        cin >> n;
        vi a(n), b(n);
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        for (int i = 0; i < n; i ++){
            cin >> b[i];
            mp[b[i]]--;
        }
        for(pair<int, int> x: mp){
            if(x.second != 0){
                cout << "no";
                return;
            }
        }
        for (int i = 0; i < n - 1 ; i++ ){
            if(b[i] > b[i + 1]){
                cout << "no";
                return;
            }
        }
        cout << "yes";
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