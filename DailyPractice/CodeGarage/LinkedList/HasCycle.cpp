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
    bool hasCycle(ListNode *head)
    {
        if (head == NULL)
            return false;
        ListNode *p = head, *q = head->next;
        while (q && q->next)
        {
            if (p == q)
            {
                return true;
            }
            q = q->next->next;
            p = p->next;
        }
        return false;
    }
};