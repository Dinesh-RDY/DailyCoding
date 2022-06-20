#include<limits.h>
class Node{
    public:
        Node *left;
        Node *right;
        int data;
};
class Solution
{
public:
    // Function to check whether a Binary Tree is BST or not.
    int val = INT_MIN;
    bool isBST(Node *root)
    {
        // Your code here
        if (!root)
            return true;
        if (!isBST(root->left))
            return false;
        if (val > root->data)
            return false;
        else
            val = root->data;
        return isBST(root->right);
    }
};