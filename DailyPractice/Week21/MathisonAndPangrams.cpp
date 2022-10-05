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
        int arr[26];    
        for (int i = 0; i < 26 ; i++)
            cin >> arr[i];
        string s;
        cin >> s;
        for (int i = 0; i < s.length();i++){
            arr[s[i] - 'a'] = 0;
        }
        int ans = 0;
        for (int i = 0; i < 26; i++)
            ans += arr[i];
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