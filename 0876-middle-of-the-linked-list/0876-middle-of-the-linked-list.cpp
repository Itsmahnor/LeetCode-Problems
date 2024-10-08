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
    ListNode* middleNode(ListNode* head) {
        ListNode *current=head;
        int count=0;
        while(current!=0){
            count++;
            current=current->next;
        }

        int mid=count/2;
        for(int i=0;i<mid;i++){
            head=head->next;
        }
return head;
    }
};