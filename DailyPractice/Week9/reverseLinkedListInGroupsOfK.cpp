
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
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        if (k == 1)
            return head;
        ListNode *prev = nullptr, *curr = head, *next = nullptr;
        int i = 0;
        while (i < k && curr)
        {
            i++;
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        if (next)
        {
            int count = 0;
            ListNode *temp = next;
            while (temp && count < k)
            {
                count++;
                temp = temp->next;
            }
            if (count == k)
                head->next = reverseKGroup(next, k);
            else
                head->next = next;
        }
        return prev;
    }
};