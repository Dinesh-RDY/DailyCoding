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
        int ans = 0;
        unordered_map<int, int> best;
        for (int i = 0; i < n; i++)
        {
            int round, score;
            cin >> round >> score;
            if (round > 8)
                continue;
            if (best[round] < score)
            {
                ans -= best[round];
                ans += score;
                best[round] = score;
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