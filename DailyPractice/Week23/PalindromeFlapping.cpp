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
        string s;
        cin >> s;
        if(n % 2 == 1) {
            cout << "YES";
            return;
        }
        int i = 0, j = n - 1 , mismatch = 0;
        while(i < j){
            if(s[i] != s[j])
                mismatch++;
            i++;
            j--;
        }
        if(mismatch % 2 == 0){
            cout << "YES";
        }else{
            cout << "NO";
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