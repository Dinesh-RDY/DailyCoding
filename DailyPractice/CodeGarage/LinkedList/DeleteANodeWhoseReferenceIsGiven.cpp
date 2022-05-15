#include <bits/stdc++.h>
using namespace std;
    struct ListNode
    {
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
    };

class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        ListNode *p;
        node->val = node->next->val;
        p = node->next;
        node->next = node->next->next;
        delete p;
    }
};