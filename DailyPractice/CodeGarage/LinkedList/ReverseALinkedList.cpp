#include<bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution{
    public:
        ListNode* reverseList(ListNode* head){
            ListNode *p = head, *q = nullptr, *r= nullptr;
            while(p){
                r = q;
                q = p;
                p = p->next;
                q->next = r;
            }
            return q;
        }
};