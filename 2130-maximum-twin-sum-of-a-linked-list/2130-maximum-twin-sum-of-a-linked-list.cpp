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
    int pairSum(ListNode* head) {
        int count = 0;
        int maxcount = 0;
        ListNode* slow = head;
        ListNode*fast = head;
       if(fast -> next ->next ==nullptr){
        return (fast->val + fast ->next -> val);
       }
        while(fast!= nullptr && fast->next->next!=nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* prev = nullptr;
        ListNode* current = slow->next;
        slow -> next = nullptr;
        ListNode* next;
        while(current != nullptr){
       
            next =  current-> next;
           current -> next = prev;
           prev = current;
           current = next;
        }
        current = head;
        while(prev  != nullptr && current != nullptr ){
            count = prev -> val + current -> val;
           
            maxcount = max(maxcount,count);
            prev = prev -> next;
            current = current -> next;

        }

return maxcount;

    }
};