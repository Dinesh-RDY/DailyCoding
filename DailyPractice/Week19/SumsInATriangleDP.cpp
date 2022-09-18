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
        ll matrix[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cin >> matrix[i][j];
            }
        }
        for (int i = n - 1; i >= 1; i--)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (matrix[i][j] > matrix[i][j + 1])
                {
                    matrix[i - 1][j] =
                        max(matrix[i - 1][j], matrix[i - 1][j] + matrix[i][j]);
                }
                else
                {
                    matrix[i - 1][j] =
                        max(matrix[i - 1][j], matrix[i - 1][j] + matrix[i][j + 1]);
                }
            }
        }
        cout << matrix[0][0];
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