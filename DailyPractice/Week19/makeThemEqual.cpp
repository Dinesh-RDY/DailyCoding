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
        int n;
        cin >> n;
        int count = n, maxi = INT_MIN, ans = 0, mini = INT_MAX, temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            maxi = max(maxi, temp);
            mini = min(mini, temp);
        }
        cout << maxi - mini;
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