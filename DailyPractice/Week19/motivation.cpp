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
        int n , x;
        cin >> n >> x;
        int ans = INT_MIN;
        while(n--){
            int size, rating;
            cin >> size >> rating;
            if(size <= x){
                ans = max(ans, rating);
            }
        }
        cout << ans << "\n";
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