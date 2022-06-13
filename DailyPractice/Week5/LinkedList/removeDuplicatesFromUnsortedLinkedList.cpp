#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     unordered_set<int> mp;
     Node* p = head , *q = head;
     while(p){
         if(mp.find(p->data) != mp.end()){
             q->next = p->next;
             p = p->next;
         }else{
             mp.insert(p->data);
             q = p;
             p = p->next;
         }
     }
     return head;
    }
};