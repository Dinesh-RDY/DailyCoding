#include <bits/stdc++.h>
#define ll long long int
#define F first
#define S second
#define pb push_back
#define vi vector<int>
#define pii pair<int, int>
#define mod 998244353
using namespace std;
class Solution
{
public:
    void solve()
    {
        string s;
        cin >> s;
        int a = 1, b = 1, c = 1;
        for (int i = 2; i <= s.length(); i++){
            c = b;
            if(s[i - 1] != s[i-2])
                c = ((c % mod) + (a % mod)) % mod;
            a = b;
            b = c;
        }
        cout << c;
    }
};

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Solution s;
    int t;
    cin >> t;
    while (t--)
    {
        s.solve();
        cout << '\n';
    }
}