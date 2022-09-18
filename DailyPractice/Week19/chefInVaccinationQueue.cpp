#include <bits/stdc++.h>
#define ll long long int
#define F first
#define S second
#define pb push_back
#define vi vector<int>
#define pii pair<int, int>
#define rep(n) for (int i = 0; i < n; i++)
using namespace std;
class Solution
{
public:
    void solve()
    {
        int n, p, x, y, temp;
        cin >> n >> p >> x >> y;
        int sum = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < p; i++)
        {
            if (arr[i] == 0)
            {
                sum += x;
            }
            else
            {
                sum += y;
            }
        }
        cout << sum;
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