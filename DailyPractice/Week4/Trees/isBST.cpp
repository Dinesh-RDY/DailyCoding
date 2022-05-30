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

class Solution
{
public:
    long long ans = LONG_MIN;
    bool isValidBST(TreeNode *root)
    {
        if (!root)
            return true;
        bool x = isValidBST(root->left);
        if (!x)
            return false;
        if (ans < root->val)
            ans = root->val;
        else
            return false;
        bool y = isValidBST(root->right);
        return x && y;
    }
};