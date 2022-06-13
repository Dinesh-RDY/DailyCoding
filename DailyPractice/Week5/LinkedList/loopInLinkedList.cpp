struct Node{
    int data;
    struct Node *next;
};

class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        Node* p = head, *q=head;
        while(q && q->next){
            q = q->next->next;
            p = p->next;
            if(q == p) return true;
        }
        return false;
    }
};