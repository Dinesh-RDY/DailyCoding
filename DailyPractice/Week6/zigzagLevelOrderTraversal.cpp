#include <vector>
#include <stack>
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
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        if (!root)
            return {};
        stack<TreeNode *> stk1, stk2;
        stk1.push(root);
        vector<vector<int>> ans;
        while (!stk1.empty() || !stk2.empty())
        {
            vector<int> v;
            while (!stk1.empty())
            {
                auto t = stk1.top();
                stk1.pop();
                v.push_back(t->val);
                if (t->left)
                    stk2.push(t->left);
                if (t->right)
                    stk2.push(t->right);
            }
            if (v.size() > 0)
                ans.push_back(v);
            v.clear();
            while (!stk2.empty())
            {
                auto t = stk2.top();
                stk2.pop();
                v.push_back(t->val);
                if (t->right)
                    stk1.push(t->right);
                if (t->left)
                    stk1.push(t->left);
            }
            if (v.size() > 0)
                ans.push_back(v);
        }
        return ans;
    }
};