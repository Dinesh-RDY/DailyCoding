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
        int d, s, e;
        cin >> d >> s >> e;
        if(s <= d && d <= e){
            cout << "Take second dose now";
        }else if(s > d){
            cout << "Too Early";
        }else{
            cout << "Too Late";
        }
        cout << "\n";
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
    }
}