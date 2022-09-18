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
        int a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        int distance = abs(a - c) + abs(b - d);
        if (distance > k)
            cout << "NO";
        else if (distance == k || (k - distance) % 2 == 0)
            cout << "YES";
        else
            cout << "NO";
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
        cout << "\n";
    }
}