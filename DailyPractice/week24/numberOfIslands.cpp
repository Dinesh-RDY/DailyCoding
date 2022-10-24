#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int n , m;
    void dfs(vector<vector<char>>& grid, int i , int j){
        if(i >= n || j >= m) return ;
        if(i < 0 || j < 0) return;
        if(grid[i][j] == '0') return;
        grid[i][j] = '0';
        dfs(grid, i , j + 1);
        dfs(grid , i+ 1, j);
        dfs(grid , i - 1 , j);
        dfs(grid, i, j - 1);
    }
    int numIslands(vector<vector<char>>& grid) {
        this->n = grid.size();
        this->m = grid[0].size();
        int count = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j] == '1'){ dfs(grid, i ,j);  count++;}
            }
        }
        return count;
    }
};