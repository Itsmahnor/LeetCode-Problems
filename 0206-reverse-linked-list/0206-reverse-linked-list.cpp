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
    ListNode* reverseList(ListNode* head) {
    if(head == nullptr) {return head;}
        ListNode* current = head;
        int count = 0;
        while(current != nullptr){
            count++;
            current = current -> next;
        }
        if(count == 1){return head;}
       vector<int> arr(count);
    
        current = head;
        for(int i=0; i<count ; i++){
            arr[i] = current -> val;
            current = current -> next;
        }
        reverse(arr.begin(),arr.end());
        ListNode* newhead = nullptr;
        ListNode* newcurrent;

        for(int i=0; i<count; i++ ){
        ListNode* newptr = new ListNode(arr[i]);
        if(newhead == nullptr){
            newhead = newptr;
            newcurrent = newhead;
            newhead -> next = newcurrent;
        }else{
            newcurrent->next = newptr;
            newcurrent = newcurrent -> next;
        }
        }
        return newhead;


        



    }
};