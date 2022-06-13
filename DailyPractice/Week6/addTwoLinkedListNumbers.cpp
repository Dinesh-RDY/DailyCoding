
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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int carry = 0;
        ListNode *p = l1, *q = l2, *prev;
        while (p && q)
        {
            p = p->next;
            q = q->next;
        }
        if (!p)
        {
            ListNode *temp = l1;
            l1 = l2;
            l2 = temp;
        }
        p = l1, q = l2;
        while (p && q)
        {
            int a = p->val + q->val + carry;
            p->val = a % 10;
            carry = a / 10;
            prev = p;
            p = p->next;
            q = q->next;
        }
        while (p && carry)
        {
            p->val += carry;
            carry = p->val / 10;
            p->val = p->val % 10;
            prev = p;
            p = p->next;
        }
        if (carry)
        {
            p = new ListNode(1);
            prev->next = p;
            p->next = nullptr;
        }
        return l1;
    }
};