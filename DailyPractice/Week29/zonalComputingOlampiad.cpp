#include <bits/stdc++.h>
#define ll long long int
#define F first
#define S second
#define pb push_back
#define vi vector<int>
#define pii pair<int, int>
#define rep(a, x, y) for (int a = x; a < y; a++)
#define all(p) p.begin(), p.end()
#define mod 1000000007
using namespace std;
class Solution
{
public:
    void solve()
    {
        int n;
        cin >> n;
        vi v(n) , dp(n);
        rep(i, 0, n)
        {
            cin >> v[i];
        }
        for (int i = 0; i <= 2; i++)
            dp[i] = v[i];
        for (int i = 3; i < n; i++){
            dp[i] = min({dp[i - 1], dp[i - 2], dp[i - 3]}) + v[i];
        }
        cout << min({dp[n - 1], dp[n - 2], dp[n - 3]});
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