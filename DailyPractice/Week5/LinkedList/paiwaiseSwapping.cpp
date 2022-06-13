#include<bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

//Function to swap elements pairwise.
struct Node* pairwise_swap(struct Node* head)
{
    // your code here
    Node* p = head , *q = head ->next;
    bool flag = true;
    while(q && q->next){
        int temp = p->data;
        p->data = q->data;
        q->data = temp;
       
            p = p->next->next;
        
            q = q->next->next;
    }
    if(q){
        int temp = p->data;
        p->data = q->data;
        q->data = temp;
    }
    return head;
}