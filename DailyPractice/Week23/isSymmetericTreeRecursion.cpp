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
    bool recurse(TreeNode *p , TreeNode* q){
        if(p && q && p->val == q->val){
            return recurse(p->left, q->right) && recurse(p->right , q->left);
        }else if(!p && !q) return true;
        else return false;
    }
    bool isSymmetric(TreeNode* root) {
        return recurse(root, root);
    }
};