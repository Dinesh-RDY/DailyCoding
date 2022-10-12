struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *mergeNodes(ListNode *head)
    {
        ListNode *p = head->next, *prev = head;
        int sums = 0;
        while (p)
        {
            if (p->val == 0)
            {
                p->val = sums;
                prev->next = p;
                prev = p;
                sums = 0;
            }
            else
            {
                sums = sums + p->val;
            }
            p = p->next;
        }
        return head->next;
    }
};