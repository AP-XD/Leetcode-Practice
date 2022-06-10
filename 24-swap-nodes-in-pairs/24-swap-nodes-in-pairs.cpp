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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
            return head;
        ListNode* tail=head,*k=head;
        int i=0;
        while(tail->next!=nullptr)
        {
            i++;
            
            tail=tail->next;
        }i++;
        if(i%2!=0)
        {
        while(k->next->next!=nullptr)
        {
            k=k->next;
        }
            k->next=nullptr;
        }
        
ListNode* returnhead=head->next;
        ListNode* returnhead2=head->next,*r=head->next;
ListNode* temp=head;
   if( returnhead->next==nullptr )  
   {returnhead2->next=head;
    head->next=nullptr;}
while(true && returnhead->next->next!=nullptr)  {   
    
ListNode* newhead=returnhead;
        
ListNode* nlink= newhead->next->next;    
        
ListNode* temp2=newhead->next;
        
newhead->next=temp;
        
temp->next=nlink;
    if(temp->next->next==nullptr){
        nlink->next=temp2;
        temp2->next=nullptr;
        break;}
    else
    {
        
        temp=temp2;
        returnhead=nlink;
    }
}   
        
        if(i%2==1)
        {
           while(r->next!=nullptr)
        {
            r=r->next;
        } 
            r->next=tail;
        }
        return returnhead2;
    } 
};