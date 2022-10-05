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
        int n, x;
        cin >> n >> x;
        string s;
        cin >> s;
        int pos = 0;
        unordered_set<int> ht({0});
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                pos--;
            else
                pos++;
            if (ht.find(pos) == ht.end())
                ht.insert(pos);
        }
        cout << ht.size();
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