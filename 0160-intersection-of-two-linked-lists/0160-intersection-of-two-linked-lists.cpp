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
        ListNode* current1 = headA;
        ListNode* current2 = headB;
        while(current1 != current2){
            if(current1==nullptr){
                current1=headB;
            }else{
                current1=current1->next;
            }
            if(current2==nullptr){
                current2=headA;
            }else{
                current2=current2->next;
            }

        }
        return current1;
    }
};