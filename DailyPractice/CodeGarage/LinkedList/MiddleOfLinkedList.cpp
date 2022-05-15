#include<bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
        ListNode* middleNode(ListNode* head) {
            ListNode *p = head, *q = head;
            while(q){
                if(q->next){
                    q = q->next;
                    if(!q->next){
                        return p->next;
                    }else{
                        q = q->next;
                    }
                    p = p->next;
                }else{
                    return p;
                }
            }
            return nullptr;
        }
        ListNode* middleNode2(ListNode* head){
            ListNode *p= head, *q= head;
            while(q && q->next){
                q = q->next->next;
                p = p->next;
            }
            return p;
        }
};