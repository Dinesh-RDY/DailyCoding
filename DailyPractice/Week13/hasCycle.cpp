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
    bool hasCycle(ListNode *head)
    {
        if (head == nullptr)
            return false;
        ListNode *p = head, *q = head->next;
        while (q && q->next && q != p)
        {
            q = q->next->next;
            p = p->next;
        }
        if (p == q)
            return true;
        return false;
    }
};