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
    vi dp;
    int count = 0;
    int recurse(int n){
        if(n == 0 || n == 1)
            return n;
        if(dp[n])
            return dp[n];
        count++;
        return dp[n] = 1 + recurse(n & (n - 1));
    }
    void solve()
    {
        int n;
        cin >> n;
        dp.resize(n + 1, 0);
        int ans = 0;
        for (int i = 0; i <= n; i++)
            ans += recurse(i);
        cout << ans << " " << count;
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