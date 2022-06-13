#include<bits/stdc++.h>
using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == nullptr) return {};
        vector<vector<int>>  ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int count = q.size();
            vector<int> v(count);
            for(int i = 0 ; i < count ; i++){
                auto temp = q.front();
                q.pop();
                v[i] = temp->val;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp -> right);
            }
            ans.push_back(v);
        }
        return ans;
    }
};