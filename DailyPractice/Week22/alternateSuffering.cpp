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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        string ans(s.begin() ,s.end());
        int time = 0;
        unordered_map<string, int> mp;
        while(mp.find(ans) == mp.end()){
            mp.insert({ans, time++});
            for (int i = 0; i < n; i++){
                if(s[i] == '0') continue;
                else{
                    if(i == 0){
                        ans[i + 1] = '1';
                    }else if(i == n-1)
                        ans[i - 1] = '1';
                    else{
                        ans[i - 1] = '1';
                        ans[i + 1] = '1';
                    }
                    ans[i] = '0';
                }
                s = ans;
            }
        }
        for(auto it: mp){
            cout << it.first << " " << it.second << endl;
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