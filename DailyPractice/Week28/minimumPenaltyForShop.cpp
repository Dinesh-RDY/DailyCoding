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
class Solution {
public:
    int bestClosingTime(string customers) {
        vi y(customers.length(), 0), n(customers.length(), 0);
        y[0] = customers[0] == 'Y' ? 1 : 0;
        n[0] = !y[0];
        rep(i , 1, customers.length()){
            if(customers[i] == 'Y'){
                y[i] = y[i - 1] + 1;
                n[i] = n[i - 1];
            }else{
                y[i] = y[i - 1];
                n[i] = n[i - 1] + 1;
            }
        }
        set<int> st;
        for(auto it: st){
            
        }
        int len = customers.length();
        int mini = y[len - 1];
        rep(i , 1 , len - 1){
            mini = min(mini, y[len - 1] - y[i - 1] + n[i] - n[0]);
        }
        return mini;
    }
};