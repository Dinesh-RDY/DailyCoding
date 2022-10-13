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
        int n ,ans;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int l = 0, h = n - 1;
        ans = INT_MAX;
        while(l < h){
            if(arr[l] > arr[h]){
                cout << -1;
                return;
            }
            // seperate this if statment thats it :(((((((((((((
            if(arr[h] - arr[l] > ans)
            {
             cout << -1;
                return;   
            }
            ans =  arr[h] - arr[l];
            l++;
            h--;
        }
        cout << arr[n-1] - arr[0];
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