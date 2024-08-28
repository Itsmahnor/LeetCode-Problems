
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
    ListNode *dummy=new ListNode(0);
    ListNode *ans=dummy;
    ListNode *temp=head;
    while(temp!=nullptr){
        if(temp->val < x){
            ListNode *NewVal=new ListNode(temp->val);
            ans->next=NewVal;
            ans=ans->next;
        }
        temp=temp->next;
    }
    temp=head;
    while(temp!=nullptr){
        if(temp->val>=x){
           ListNode *NewVal=new ListNode(temp->val);
            ans->next=NewVal;
            ans=ans->next;
        }
        temp=temp->next;
    }
    return dummy->next;
    }
};