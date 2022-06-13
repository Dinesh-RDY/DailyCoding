#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int v){
        this->data = data;
        
    }
};
class Solution
{
    public:
    int size = 0;
    Node* reverse(Node* head){
        Node* p = head , * q = NULL, *r = NULL;
        if(!p) return p;
        size  = 0;
        while(p){
            r = q;
            q= p;
            p = p->next;
            q->next = r;
            size++;
        }
        
        return q;
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here4
        first = reverse(first);
        int s1 = size;
        second = reverse(second);
        int s2  = size;
        if(s1 < s2){
            Node* temp = first;
            first = second;
            second= temp;
        }
        Node* p = first , *q = second;
        int carry = 0 ;
        while(q){
            p->data += (q->data + carry);
            carry = p->data /10;
            p->data = p->data % 10;
            p = p->next;
            q= q->next;
        }
        while(p){
            p->data += carry;
            carry = p->data / 10;
            p->data = p->data % 10;
            p=p->next;
        }
        first = reverse(first);
        if(carry == 1){
            Node* temp = new Node(1);
            temp->next = first;
            first = temp;
        }
        return first;
    }
};
