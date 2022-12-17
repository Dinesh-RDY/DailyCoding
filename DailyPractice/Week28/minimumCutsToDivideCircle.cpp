#include <bits/stdc++.h>
#define ll long long int
#define F first
#define S second
#define pb push_back
#define vi vector<int>
#define pii pair<int, int>
#define rep(a, x, y) for (int a = x; a < y; a++)
#define all(p) p.begin(), p.end()
#define mod 1000000007
using namespace std;
class Solution
{
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>> &grid)
    {
        vector<vi> rows, cols;
        for (int i = 0; i < grid.size(); i++)
        {
            int one = 0, zero = 0;
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == 1)
                    one++;
                else
                    zero++;
            }
            rows.push_back({zero, one});
        }
        for (int i = 0; i < grid[0].size(); i++)
        {
            int one = 0, zero = 0;
            for (int j = 0; j < grid.size(); j++)
            {
                if (grid[i][j] == 1)
                    one++;
                else
                    zero++;
            }
            cols.push_back({zero, one});
        }
        for (int i = 0; i < grid[0].size(); i++)
        {
            for (int j = 0; j < grid.size(); j++)
            {
                grid[i][j] = rows[i][1] + cols[j][1] - rows[i][0] - cols[j][0];
            }
        }
        return grid;
    }
};