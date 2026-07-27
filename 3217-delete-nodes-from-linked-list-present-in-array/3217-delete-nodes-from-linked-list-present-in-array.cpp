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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,int> m1;
        for(int i=0;i<nums.size();i++){
            m1[nums[i]] = i;
        }
        ListNode* prev = head;
        ListNode* current = head;
        ListNode* next;
        while(current != nullptr){
         if(m1.find(current->val) != m1.end()){
           if(current == head){
        
            current = current -> next;
            head = current;
            prev = current;
        
            
           }else{
        
prev->next = current->next;
current = current->next;

           }
            
         }else{
            prev = current;
            current = current -> next;
            
         }
        }

       return head;
        

    }
};