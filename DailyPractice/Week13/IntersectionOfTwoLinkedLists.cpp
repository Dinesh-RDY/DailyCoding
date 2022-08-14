// code that runs in O(m+n) tc and O(1) sc
#include <iostream>
#include <unordered_set>
using namespace std;
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        int len1 = 0, len2 = 0;
        ListNode *p = headA, *q = headB;
        while (p || q)
        {
            if (p)
            {
                len1++;
                p = p->next;
            }
            if (q)
            {
                len2++;
                q = q->next;
            }
        }

        int diff = abs(len1 - len2);
        if (len1 < len2)
        {
            ListNode *temp = headA;
            headA = headB;
            headB = temp;
        }
        p = headA;
        q = headB;
        for (int i = 0; i < diff; i++)
        {
            p = p->next;
        }
        while (p && q)
        {
            if (p == q)
                return p;
            p = p->next;
            q = q->next;
        }
        return nullptr;
    }
};

// using unordered_map

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    unordered_set<ListNode *> mp;
    ListNode *p = headA;
    while (p)
    {
        mp.insert(p);
        p = p->next;
    }
    p = headB;
    while (p)
    {
        if (mp.find(p) != mp.end())
            return p;
        p = p->next;
    }
    return nullptr;
}