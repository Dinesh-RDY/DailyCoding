
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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        int count = 0;
        ListNode *p = head, *q = head;
        while (count < n)
        {
            p = p->next;
            count++;
        }
        if (!p)
            return head->next;
        while (p->next)
        {
            p = p->next;
            q = q->next;
        }
        q->next = q->next->next;
        return head;
    }
};