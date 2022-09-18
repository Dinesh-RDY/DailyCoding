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
        int n, k;
        cin >> n >> k;
        if (n == 1)
        {
            cin >> k;
            cout << "YES";
            return;
        }
        int arr[n], mini = INT_MAX, maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mini = min(mini, arr[i]);
            maxi = max(maxi, arr[i]);
        }
        if (mini + maxi <= k)
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
        cout << '\n';
    }
}