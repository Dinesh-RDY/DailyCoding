#include <bits/stdc++.h>
using namespace std;
// Definition for a Node.
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node *next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node *_left, Node *_right, Node *_next)
        : val(_val), left(_left), right(_right), next(_next) {}
};

class Solution
{
public:
    Node *connect(Node *root)
    {
        Node *dummy = new Node(0);
        cout << " Hello ";
        if (!root || (!root->left && !root->right))
            return root;
        queue<Node *> q;
        q.push(root);
        q.push(dummy);
        while (!q.empty())
        {
            auto temp = q.front();
            q.pop();
            auto x = q.front();
            if (x != dummy)
            {
                temp->next = x;
            }
            else
            {
                temp->next = nullptr;
                q.pop();
            }
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
            if (x == dummy)
                q.push(dummy);
        }
        return root;
    }
};