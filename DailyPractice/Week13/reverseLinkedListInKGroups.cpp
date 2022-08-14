// Recursive Approach
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
        ListNode *temp = head;
        for (int i = 0; i < k; i++)
        {
            if (!temp)
                return head;
            temp = temp->next;
        }
        ListNode *present = head, *prev = nullptr, *next = nullptr;
        for (int i = 0; i < k; i++)
        {
            next = present->next;
            present->next = prev;
            prev = present;
            present = next;
        }
        if (next)
            head->next = reverseKGroup(next, k);
        return prev;
    }
};