#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void dfs(vector<vector<int>> &grid, int i, int visited[])
    {
        int n = grid.size();
        if (visited[i])
            return;
        visited[i] = true;
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j])
                dfs(grid, j, visited);
        }
    }
    int findCircleNum(vector<vector<int>> &isConnected)
    {
        int count = 0;
        int n = isConnected.size();
        int visited[n];
        memset(visited, 0, sizeof(visited));
        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                dfs(isConnected, i, visited);
                count++;
            }
        }
        return count;
    }
};