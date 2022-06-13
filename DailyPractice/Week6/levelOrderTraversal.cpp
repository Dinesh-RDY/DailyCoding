#include <queue>

#include <vector>
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

vector<vector<int>> levelOrder(TreeNode *root)
{
    if (!root)
        return {};
    queue<TreeNode *> q;
    vector<vector<int>> ans;
    q.push(root);
    while (!q.empty())
    {
        int count = q.size();
        vector<int> v;
        for (int i = 0; i < count; i++)
        {
            auto t = q.front();
            q.pop();
            v.push_back(t->val);
            if (t->left)
                q.push(t->left);
            if (t->right)
                q.push(t->right);
        }
        ans.push_back(v);
    }
    return ans;
}