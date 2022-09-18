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
        int a, b, a1, b1, a2, b2;
        cin >> a >> b >> a1 >> b1 >> a2 >> b2;
        if ((a == a1 && b == b1) || (a == b1 && b == a1))
        {
            cout << 1 << '\n';
        }
        else if ((a == a2 && b == b2) || (a == b2 && b == a2))
            cout << 2 << '\n';
        else
            cout << 0 << '\n';
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
    }
}