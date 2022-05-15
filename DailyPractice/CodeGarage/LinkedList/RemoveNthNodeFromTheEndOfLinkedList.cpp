#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution
{
public:
    ListNode *removeNthFromLast(ListNode *head, int n)
    {
        ListNode *temp = new ListNode(1);
        temp->next = head;
        ListNode *slow = temp;
        ListNode *fast = temp;
        for (int i = 1; i <= n; i++)
            fast = fast->next;
        while (fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return temp->next;
    }
};
