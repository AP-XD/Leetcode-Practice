/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if( head->next==nullptr)
            return nullptr;
        
        ListNode* t=head;
        int i=0;
        while(t->next!=nullptr)
        {
            i++;
            t=t->next;
        }n=i-n;
        if(n==-1)
            return head->next;
        t=head;
        i=0;
        while(i!=n)
        {
            t=t->next;
            i++;
        }
        t->next=t->next->next;
        return head;
    }
};