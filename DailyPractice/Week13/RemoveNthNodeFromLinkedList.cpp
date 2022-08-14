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
        ListNode *p = head, *q = head, *prev = nullptr;
        while (n && q)
        {
            q = q->next;
            n--;
        }
        while (q)
        {
            prev = p;
            p = p->next;
            q = q->next;
        }
        if (p == head)
            return head->next;
        prev->next = p->next;
        return head;
    }
};