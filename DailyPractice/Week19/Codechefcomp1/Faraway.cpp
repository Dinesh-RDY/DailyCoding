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
        int ans = 0;
        int n, m;
        cin >> n >> m;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(m - arr[i]  > arr[i] - 1){
                ans += (m - arr[i]);
            }else{
                ans += (arr[i] - 1);
            }
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