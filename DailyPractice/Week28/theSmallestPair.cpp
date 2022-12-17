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
        int n;
        cin >> n;
        vi arr(n);
        rep(n)
        {
            cin >>
                arr[i];
        }
        int min1 = INT_MAX, min2 = INT_MAX;
        rep(n)
        {
            if (arr[i] < min1)
            {
                min2 = min1;
                min1 = arr[i];
            }
            else if (arr[i] < min2)
            {
                min2 = arr[i];
            }
        }
        cout << min1 + min2 << endl;
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