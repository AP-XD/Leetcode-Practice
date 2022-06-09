/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ha=headA;
        ListNode *hb=headB;
        unordered_map<ListNode *,int> m;
        while (ha!=NULL)
        {
            m[ha]++;
            ha=ha->next;
        }
        while (hb!=NULL)
        {
            if(m[hb]){
            return hb;
            }
            hb=hb->next;
        }
        return NULL;
        
        
    }
};