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
    vector<int> rightSideView(TreeNode* root) {
        if(root == nullptr) return {};
        queue<TreeNode*> q;
        q.push(root);
        vector<int> v;
        while(!q.empty()){
            int count = q.size();
            for(int i= 0 ; i < count ; i++){
                auto t = q.front();q.pop();
                if(i == 0) v.push_back(t->val);
                if(t->right) q.push(t->right);
                if(t->left) q.push(t->left);
            }
        }
        return v;
        
    }
};