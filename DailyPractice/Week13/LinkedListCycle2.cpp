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
    ListNode *detectCycle(ListNode *head)
    {
        ListNode *p = head, *q = head;
        if (!q || !q->next)
            return nullptr;
        do
        {
            p = p->next;
            q = q->next->next;
        } while (q && q->next && p != q);
        if (p != q)
            return nullptr;
        p = head;
        while (p != q)
        {
            p = p->next;
            q = q->next;
        }
        return p;
    }
};