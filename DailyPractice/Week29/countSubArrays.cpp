#include<bits/stdc++.h>
#define ll             long long int
#define F              first
#define S              second
#define pb             push_back
#define vi             vector <int>
#define pii            pair <int, int>
#define rep(a,x,y)     for (int a = x; a < y; a++)
#define all(p)         p.begin(), p.end()
#define mod 1000000007
using namespace std;
class Solution{
    public:
    void solve(){
        int n;
        cin >> n;
        vi arr(n);
        rep(i ,0 , n){
            cin >> arr[i];
        }
        int i = 0, j = 0 , cnt = 0 , ans = 0;
        for(int i=0; i<n; i++){
            cnt++;
            if(i!=n-1 and arr[i]>arr[i+1]){
                ans += (cnt*(cnt+1))/2;
                cnt=0;
            }
        }
        ans += (cnt*(cnt+1))/2;
        cout << ans;
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