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
    unordered_map<int, int> mp;
    int count = 0;
    TreeNode *recurse(vector<int> &preorder, vector<int> &inorder, int start, int end)
    {
        if (start > end)
            return nullptr;
        TreeNode *root = new TreeNode(preorder[count]);
        int x = mp[preorder[count++]];
        if (start == end)
            return root;
        root->left = recurse(preorder, inorder, start, x - 1);
        root->right = recurse(preorder, inorder, x + 1, end);
        return root;
    }
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        for (int i = 0; i < inorder.size(); i++)
        {
            mp[inorder[i]] = i;
        }
        return recurse(preorder, inorder, 0, inorder.size() - 1);
    }
};