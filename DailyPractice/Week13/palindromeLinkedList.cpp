// This is a solution that uses no extra space and solves in O(n) time
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
    bool isPalindrome(ListNode *head)
    {
        ListNode *p = head, *q = nullptr, *r = nullptr, *fp = head;
        while (fp && fp->next)
        {
            fp = fp->next->next;
            r = q;
            q = p;
            p = p->next;
            q->next = r;
        }
        if (fp)
        {
            p = p->next;
        }
        while (p)
        {
            if (p->val != q->val)
                return false;
            p = p->next;
            q = q->next;
        }
        return true;
    }
};