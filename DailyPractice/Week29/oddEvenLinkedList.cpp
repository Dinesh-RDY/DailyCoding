#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *oddEvenList(ListNode *head)
    {
        if (!head || !head->next)
            return head;
        ListNode *head1 = head->next, *p = head, *q = head;
        while (q && q->next && q->next->next)
        {
            q = q->next->next;
            p->next->next = q->next;
            p->next = q;
            p = p->next;
        }
        p->next = head1;
        return head;
    }
};