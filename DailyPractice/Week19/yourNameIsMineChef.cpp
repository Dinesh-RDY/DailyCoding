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
        string s, m;
        cin >> s >> m;
        int i = 0;
        for (int j = 0; j < m.length(); j++)
        {
            if (s[i] == m[j])
            {
                i++;
            }
        }
        if (i == s.length())
        {
            cout << "YES";
            return;
        }
        i = 0;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == m[i])
            {
                i++;
            }
        }
        if (i == m.length())
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