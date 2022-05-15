#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size() , cols = matrix[0].size();
        int left = 0 , k =  0 ,right = cols, top = 0 , bottom = rows;
        vector<int> ans(rows * cols);
        while(left!= right || top != bottom){
            for(int i = left ; i < right ;i++ ){
                ans[k++] = matrix[top][i];
            }
            for(int i = top -1 ;i < rows ;i++){
                ans[k++] = matrix[i][right];
            }
            for(int i  = right - 1;i >= left ;i-- ){
                ans[k++] = matrix[bottom-1][i];
            }
            for(int i = bottom-1;i >= top;i--){
                ans[k++] = matrix[i][left];
            }
            left++;
            bottom--;
            right--;
            top++;
        }
        return ans;
    }
};