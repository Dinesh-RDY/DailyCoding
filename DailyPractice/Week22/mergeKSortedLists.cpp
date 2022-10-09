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
// The idea is to push all heads into pq then get minimum head include in answer push its next element
// into priority queue
class Solution
{
public:
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        auto comp = [&](ListNode *a, ListNode *b)
        {
            return a->val > b->val;
        };
        priority_queue<ListNode *, vector<ListNode *>, decltype(comp)> pq(comp);
        for (int i = 0; i < lists.size(); i++)
        {
            if (lists[i])
                pq.push(lists[i]);
        }
        ListNode *dummyhead = new ListNode(0), *tail = dummyhead;
        while (!pq.empty())
        {
            auto temp = pq.top();
            pq.pop();
            if (temp->next)
                pq.push(temp->next);
            tail->next = temp;
            tail = temp;
        }
        tail->next = nullptr;
        return dummyhead->next;
    }
};