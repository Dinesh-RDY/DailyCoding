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
    long long int prev = LONG_LONG_MIN;
    bool isValidBST(TreeNode *root)
    {
        if (!root)
            return true;
        bool x, y;
        if (root)
        {
            x = isValidBST(root->left);
            if (prev < root->val)
            {
                prev = root->val;
            }
            else
            {
                return false;
            }
            y = isValidBST(root->right);
        }
        return x && y;
    }
};