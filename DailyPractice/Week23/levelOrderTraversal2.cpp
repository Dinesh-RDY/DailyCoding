#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root)
            return {};
        queue<TreeNode *> q;
        q.push(root);
        q.push(nullptr);
        vector<vector<int>> ans;
        while(q.front() != nullptr){
            vector<int> v;
            while(q.front() != nullptr){
                auto x = q.front();
                v.push_back(x->val);
                if(x->left)
                    q.push(x->left);
                if(x->right)
                    q.push(x->right);
                q.pop();
            }
            q.pop();
            q.push(nullptr);
            ans.push_back(v);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};