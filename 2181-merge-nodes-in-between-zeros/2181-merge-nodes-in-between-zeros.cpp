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
    ListNode* mergeNodes(ListNode* head) {
         ListNode* z=head;
        ListNode* prev=head;
        
        ListNode* curr=head->next;
        while(true)
        {
            if(curr->next==nullptr)
                break;
            if(curr->val!=0)
            {
                curr->val+=prev->val;
                z->next=curr;
            }if(curr->val==0)
            {
                z=curr;
            }
            prev=curr;
            curr=curr->next;
        }
        head=head->next;
         ListNode* t=head;
        while(t!=nullptr)
        {
            t->next=t->next->next;
            t=t->next;
                
        }
        return head;
    }
};