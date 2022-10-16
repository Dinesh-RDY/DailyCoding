#include <bits/stdc++.h>
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
    ListNode *deleteDuplicates(ListNode *head)
    {
        if(!head || !head->next)
            return head;
        ListNode *p , *prev, *dummy = new ListNode(-101, head);
        prev = dummy, p = head;
        while(p){
            if(p->next && p->val == p->next->val){
                while(p->next && p->next->val == p->val){
                    p = p->next;
                }
                prev->next = p->next;
            }else{
                prev = prev->next;
            }
            p = p->next;
        }
        return head;
    }
};