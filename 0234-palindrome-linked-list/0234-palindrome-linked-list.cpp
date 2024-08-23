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
    bool isPalindrome(ListNode* head) {
        
        if(!head || !head->next){
            return true;
        }

            ListNode *slow=head;
            ListNode *fast=head->next;
            while(fast->next && fast->next->next){
                slow=slow->next;
                fast=fast->next->next;
            }
            cout<<slow->val;
            ListNode *pre=nullptr;
            ListNode *current=slow;
            while(current!=nullptr){
                ListNode *next=current->next;
                current->next=pre;
                pre=current;
                current=next;
            }
            cout<<pre->val;
ListNode *newlist=pre;
ListNode *orig=head;
bool palindrome=true;
while(orig!=nullptr && newlist!=nullptr){
  
    if(orig->val!=newlist->val){
          cout<<"hello";
      return false;
    }
    orig=orig->next;
    newlist=newlist->next;
}

return true;
    }
    
};