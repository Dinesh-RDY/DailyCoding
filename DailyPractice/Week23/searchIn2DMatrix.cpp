#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int i = 0, j = m - 1 , mid;
        // This loop does the work of lower bound
        while(i < j){
            mid = (i + j + 1) / 2;
            if(matrix[mid][0] == target)
                return true;
            else if(matrix[mid][0] > target)
                j = mid - 1;
            else
                i = mid;
        }
        int row = i;
        i = 0, j = n - 1;
        while(i <= j){
            mid = (i + j) / 2;
            if(matrix[row][mid] == target)
                return true;
            else if(matrix[row][mid] < target)
                i = mid + 1;
            else
                j = mid - 1;
        }
        return false;
    }
};