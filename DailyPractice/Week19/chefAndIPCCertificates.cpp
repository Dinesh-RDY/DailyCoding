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
        int n, m, k, count = 0;
        cin >> n >> m >> k;
        for (int i = 0; i < n; i++)
        {
            int arr[k];
            int sum = 0;
            for (int j = 0; j < k; j++)
            {
                cin >> arr[j];
                sum += arr[j];
            }
            int q;
            cin >> q;
            if (sum >= m && q <= 10)
                count++;
        }
        cout << count << '\n';
    }
};

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Solution s;
    int t = 1;
    while (t--)
    {
        s.solve();
        cout << "\n";
    }
}