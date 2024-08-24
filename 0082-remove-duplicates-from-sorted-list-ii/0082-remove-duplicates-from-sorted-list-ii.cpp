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
    
    ListNode* deleteDuplicates(ListNode* head) {
         unordered_map<int, int> countMap;
         ListNode *current=head;
         while(current!=0){
            countMap[current->val]++;
            current=current->next;
         }
         current=head;
         ListNode *dummy=new ListNode(0);
         ListNode *tail=dummy;
         while(current!=nullptr){
            if(countMap[current->val] == 1){
                ListNode *value=new ListNode(current->val);
                tail->next=value;
                tail=tail->next;
            }
            current=current->next;
         }
         return dummy->next;
    }
	
	
	
    
};