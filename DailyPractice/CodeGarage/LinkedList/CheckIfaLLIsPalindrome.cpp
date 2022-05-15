#include<bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution{
    bool isPalindrome(ListNode* head){
        vector<int> v; int i = 0;
        ListNode* p =head;
        while(p){
            v.push_back(p->val);
            p=p->next;
            i++;
        }
        for(int j = 0 ; j < i ; j++){
            if(v[j] != v[i - j -1])return false;
        }
        return true;
    }
};