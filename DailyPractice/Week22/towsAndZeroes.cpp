#include <bits/stdc++.h>
#define ll long long int
#define F first
#define S second
#define pb push_back
#define vi vector<int>
#define pii pair<int, int>
#define mod 1000000007
using namespace std;
class Solution
{
public:
    // int recurse(int n, int m)
    // {
    //     if (n == 0 || m == 0)
    //         return 0;
    //     if (n == 1 && m == 1)
    //         return 1;
    //     // int x = 0;

    //     // if (abs(n - m) % 3 == 0)
    //     //     x = 1;
    //     return recurse(n - 1, m) + recurse(n, m - 1);
    // }
    
    void solve()
    {
        ll n, m;
        cin >> n >> m;
        int b = m / 3 + 1;
        int a = (m - 1) / 3 + 1;
        int c = (m - 2) / 3 + 1;
        int ans = b - 1;
        int x = (n - 1) / 3;
        int res = (n - 1) % 3;
        int sum = (a + b + c);
        ans = (ans % mod + ((sum % mod) * (x % mod)) % mod) % mod;
        if(res == 1)
            ans += a;
        else if(res == 2)
            ans += (a + c);
        cout << ans;
    
        // int n, m;
        // cin >> n >> m;
        // cout << recurse(n, m);
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