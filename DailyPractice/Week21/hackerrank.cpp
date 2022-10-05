#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s1, s2;
    cin >> s1 >>  s2;
    unordered_map<char, int> mp1, mp2;
    for(char c: s1)
        mp1[c]++;
    for(char c: s2)
        mp2[c]++;
    for(char c : s1){
        if(abs(mp1[c] - mp2[c]) > 3){
            cout << "NotPossible";
            return;
        }
    }
    for(char c : s2){
        if(abs(mp2[c] - mp1[c]) > 3){
            cout << "NotPossible";
            return;
        }
    }
    cout << "Possible";
}


int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
}