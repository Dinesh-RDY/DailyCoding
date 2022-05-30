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
    bool recurse(TreeNode *root, int k, unordered_set<int> &s)
    {
        if (!root)
            return false;
        if (recurse(root->left, k, s))
            return true;
        if (s.find(k - root->val) != s.end())
            return true;
        else
            s.insert(root->val);
        return recurse(root->right, k, s);
    }
    bool findTarget(TreeNode *root, int k)
    {
        unordered_set<int> s;
        return recurse(root, k, s);
    }
};