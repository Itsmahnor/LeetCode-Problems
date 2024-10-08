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
    ListNode* sortList(ListNode* head) {
       if(!head || !head->next){
        return head;
       }
       ListNode* mid=getmiddle(head);
       ListNode* second=mid->next;
       mid->next=nullptr;

       ListNode *left=sortList(head);
        ListNode *right=sortList(second);

      return  merge(left,right);
    }
    private:
    ListNode* getmiddle(ListNode* head){
        ListNode* slow=head;
ListNode* fast=head->next;
while(!fast){
    slow=slow->next;
    fast=fast->next->next;
}
return slow;
    }

    ListNode* merge(ListNode* l1, ListNode* l2){
        ListNode* dummy=new ListNode(0);
        ListNode* tail=dummy;
        while(l1 && l2){
            if(l1->val<l2->val){
                tail->next=l1;
                l1=l1->next;
            }
            else{
                tail->next=l2;
                l2=l2->next;
            }
            tail=tail->next;
        }
        while(l1){
            tail->next=l1;
                l1=l1->next; tail=tail->next;
        }
        while(l2){
            tail->next=l2;
                l2=l2->next; tail=tail->next;
        }

        return dummy->next;
        }
    
};