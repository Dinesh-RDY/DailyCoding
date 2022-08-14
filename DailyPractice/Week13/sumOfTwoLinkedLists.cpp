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
        ListNode *p = l1, *q = l2, *prev, *temp;
        while (p && q)
        {
            p = p->next;
            q = q->next;
        }
        if (!p)
        {
            temp = l1;
            l1 = l2;
            l2 = temp;
        }
        p = l1, q = l2;
        int carry = 0;
        while (p && q)
        {
            int sum = p->val + q->val + carry;
            carry = sum / 10;
            p->val = sum % 10;
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
            prev->next = new ListNode(1);
        }
        return l1;
    }
};