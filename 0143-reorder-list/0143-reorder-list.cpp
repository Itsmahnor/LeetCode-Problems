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
    void reorderList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
    return;
}
        ListNode* slow = head;
        ListNode* fast=head;
       
        while( fast != nullptr && fast->next != nullptr){
            fast = fast->next->next;
            slow = slow->next;
        }
      
        ListNode* prev = nullptr;
        ListNode* current = slow->next;
        slow->next = nullptr;
        ListNode* next;
        while(current != nullptr){
            next = current -> next;
            current -> next = prev;
            prev = current;
            current = next;
        }

        current = head;
        ListNode* next1;
        ListNode* next2;
         ListNode* p;
      
        while(prev != nullptr && current != nullptr){
        next1=current->next;
        next2=prev->next;
    
        current->next = prev;
        prev -> next = next1;
        current = next1;
        prev = next2;
        
        }
      

    }
};