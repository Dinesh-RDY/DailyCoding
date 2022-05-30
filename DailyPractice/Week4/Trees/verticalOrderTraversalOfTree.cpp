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
    void recurse(TreeNode *root, map<int, vector<pair<int, int>>> &mp, int hd, int level)
    {
        if (root == NULL)
            return;
        mp[hd].push_back({level, root->val});
        recurse(root->left, mp, hd - 1, level + 1);
        recurse(root->right, mp, hd + 1, level + 1);
    }
    vector<vector<int>> verticalTraversal(TreeNode *root)
    {
        map<int, vector<pair<int, int>>> mp;
        recurse(root, mp, 0, 0);
        vector<vector<int>> v;
        for (auto &it : mp)
        {
            sort(it.second.begin(), it.second.end());
            vector<int> temp;

            for (auto &p : it.second)
                temp.push_back(p.second);
            v.push_back(temp);
        }
        return v;
    }
};