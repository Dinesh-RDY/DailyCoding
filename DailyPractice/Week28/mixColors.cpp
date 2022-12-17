#include<bits/stdc++.h>
#define ll             long long int
#define F              first
#define S              second
#define pb             push_back
#define vi             vector <int>
#define pii            pair <int, int>
#define rep(n)         for (int i = 0; i < n; i++)
using namespace std;
class Solution{
    public:
    void solve(){
        int n , temp;
        cin >> n;
        vi nums(n);
        unordered_set<int> mp;
        rep(n){
            cin >> temp;
            // insertion here will take O(1) in best case else n2 in worst
            mp.insert(temp);
        }
        // sort(begin(nums), end(nums));
        // queue<int> q;
        //int maxi = nums[n - 1];
        // rep(n) q.push(nums[i]);
        // int count = 0;
        // while(!q.empty()){
        //     int x = q.front();
        //     q.pop();
        //     if(q.front() == x){
        //         count++;
        //         maxi = maxi + x;
        //     }
        // }
        // rep(n - 1){
        //     if(nums[i] == nums[i+1]){
        //         count++;
        //         maxi = maxi + nums[i];
        //     }
        // }
        // cout << count;
        // rep(n){
        //     mp.insert(nums[i]);
        // }
        cout << n - mp.size();
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