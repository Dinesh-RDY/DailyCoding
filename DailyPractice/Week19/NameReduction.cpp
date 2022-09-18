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
        string a, b, c;
        cin >> a >> b;
        a = a + b;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            string temp;
            cin >> temp;
            c += temp;
        }
        unordered_map<int, ll> mp;
        for (char i : a)
        {
            mp[i]++;
        }
        for (char i : c)
        {
            mp[i]--;
        }
        for (auto it : mp)
        {
            if (it.second < 0)
            {
                cout << "NO";
                return;
            }
        }
        cout << "YES";
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