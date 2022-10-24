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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(c % a != 0 || d % b != 0){
            cout << "NO";
            return;
        }
        int x = c / a;
        int y = d / b;
        if(x == y - 1|| y == x - 1)
            cout << "YES";
        else
            cout << "NO";
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