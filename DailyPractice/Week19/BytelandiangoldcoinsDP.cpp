#include <bits/stdc++.h>
#define ll long long int
#define F first
#define S second
#define pb push_back
#define vi vector<int>
#define pii pair<int, int>
using namespace std;
class Solution
{
public:
    unordered_map<ll, ll> mp;

    ll solve2(ll n)
    {
        if (n < 2)
        {
            return n;
        }

        if (mp.count(n))
        {
            return mp[n];
        }

        mp[n] = max(n, solve2(n / 2) + solve2(n / 3) + solve2(n / 4));
        return mp[n];
    }
};

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Solution s;
    ll t;
    cin >> t;

    cout << s.solve2(t);
    cout << '\n';
}
