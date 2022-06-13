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
    bool recurse(TreeNode *root, vector<TreeNode *> &a1, TreeNode *p)
    {
        if (root == NULL)
            return false;
        if (p->val == root->val)
        {
            a1.push_back(root);
            return true;
        }
        bool flag1 = recurse(root->left, a1, p);
        if (flag1)
        {
            a1.push_back(root);
            return true;
        }
        bool flag2 = recurse(root->right, a1, p);
        if (flag2)
        {
            a1.push_back(root);
            return true;
        }
        return false;
    }
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        vector<TreeNode *> a1, a2;
        recurse(root, a1, p);
        recurse(root, a2, q);
        for (int i = a1.size() - 1, j = a2.size() - 1; i >= 0 && j >= 0; i--, j--)
        {
            if ((i == 0 || j == 0) && (a1[i] == a2[j]))
                return a1[i];
            if (a1[i] != a2[j])
            {
                return a1[i + 1];
            }
        }
        return NULL;
    }
};