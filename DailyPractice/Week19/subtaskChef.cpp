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
    void solve()
    {
        int n, m, k, count = 0, firstm = 0;
        cin >> n >> m >> k;
        vi v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i])
                count++;
            if (v[i] && i < m)
                firstm++;
        }
        if (count == n)
            cout << 100;
        else if (firstm == m)
            cout << k;
        else
            cout << 0;
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