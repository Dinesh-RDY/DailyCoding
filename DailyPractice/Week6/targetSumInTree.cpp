#include<bits/stdc++.h>
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
class Solution
{
public:
    bool recurse(TreeNode *root, int sum, int target)
    {
        if (!root)
            return false;
        if (root->left == NULL && root->right == NULL)
            return target == sum + root->val;
        return recurse(root->left, sum + root->val, target) || recurse(root->right, sum + root->val, target);
    }
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        return recurse(root, 0, targetSum);
    }
};