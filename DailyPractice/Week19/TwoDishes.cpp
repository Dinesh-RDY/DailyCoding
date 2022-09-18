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
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int sum;
        if (a > b)
        {
            sum = b;
        }
        else
        {
            sum = a;
            b = b - a;
            if (c > b)
            {
                sum += b;
            }
            else
            {
                sum += c;
            }
        }
        if (sum < n)
        {
            cout << "NO"
                 << "\n";
        }
        else
        {
            cout << "YES"
                 << "\n";
        }
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