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
    ListNode* swapNodes(ListNode* head, int k) {
        if(!head && !head->next){
            return head;
        }
        ListNode *left;
        ListNode *current=head;
        int count=0;
        while(current!=nullptr){
            count++;
            current=current->next;
        }
        current=head;
        for(int i=count;i>=k;i--){
          
             left=current;
              current=current->next;
        }
        current=head;ListNode *right;
        for(int i=0;i<k;i++){
           
             right=current;
              current=current->next;
        }
        int temp=left->val;
        left->val=right->val;
        right->val=temp;

        return head;
    }
};