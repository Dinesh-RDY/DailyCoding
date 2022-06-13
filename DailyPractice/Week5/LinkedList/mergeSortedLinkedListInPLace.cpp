Node *sortedMerge(Node *head1, Node *head2)
{
    // code here
    Node *p = head1, *q = head2, *temp, *prev = nullptr;
    while (p && q)
    {
        if (p->data <= q->data)
        {
            prev = p;
            p = p->next;
        }
        else
        {
            temp = q;
            q = q->next;
            temp->next = p;
            if (prev == nullptr)
            {

                head1 = temp;
            }
            else
            {
                prev->next = temp;
            }
            prev = temp;
        }
    }
    if (q)
    {
        prev->next = q;
    }
    return head1;
}