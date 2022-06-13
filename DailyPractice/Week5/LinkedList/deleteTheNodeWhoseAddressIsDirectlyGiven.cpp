#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       // Your code here
       
       del->data = del->next->data;
       Node* temp = del->next;
       del->next = del->next->next;
       delete temp;
    }

};
