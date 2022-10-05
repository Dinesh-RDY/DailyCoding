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
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            if(mp[temp] == 0)
                mp[temp] = 1;
            else
                mp[temp] = 0;
        }
        for(auto it: mp){
            if(it.second)
                cout <<  it.first;
        }
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