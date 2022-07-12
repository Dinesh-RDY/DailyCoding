// There is a robot on an m x n grid. The robot is initially located at the top-left corner (i.e., grid[0][0]). The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). The robot can only move either down or right at any point in time.

// Given the two integers m and n, return the number of possible unique paths that the robot can take to reach the bottom-right corner.
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int recurse(vector<vector<int>>& dp, int i , int j){
        int m =dp.size() , n = dp[0].size();
        if(i == m -1 || j == n-1) return 1;
        if(dp[i][j]) return dp[i][j];
        dp[i][j] = recurse(dp , i+1 , j) + recurse(dp , i , j+1);
        return dp[i][j];
    }
    int uniquePaths(int m, int n) {
        if(m ==1 || n ==1) return 1;
        vector<vector<int>> dp( m , vector<int> (n , 0));
        int x = recurse(dp , 0 , 0);
        return x; 
    }
};