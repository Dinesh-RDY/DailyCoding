#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
class Solution
{
public:
    // Function to rotate a linked list.
    Node *rotate(Node *head, int k)
    {
        // Your code here
        Node *p = head, *q;
        int count = 0;
        while (p && count < k)
        {
            count++;
            q = p;
            p = p->next;
        }
        if (!p)
            return head;
        while (p->next)
        {
            p = p->next;
        }
        p->next = head;
        head = q->next;
        q->next = nullptr;

        return head;
    }
};