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
        int n, k, sum = 0, ans;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (i < k)
                sum += temp;
            arr[i] = temp;
        }
        ans = sum;
        for (int i = 0; i + k < n; i++)
        {
            sum += arr[i + k] - arr[i];
            ans = max(ans, sum);
        }
        cout << ans;
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