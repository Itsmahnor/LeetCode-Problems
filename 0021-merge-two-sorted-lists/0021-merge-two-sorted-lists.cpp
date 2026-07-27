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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr) return list2;
if (list2 == nullptr) return list1;
        ListNode* current1 = list1;
        ListNode* current2 = list2;
        ListNode* newList = nullptr;
        ListNode* newListCurrent = nullptr;
        while(current1 != nullptr && current2 != nullptr ){
            if(current1 -> val <= current2 -> val){
                ListNode* nnode = new ListNode(current1->val);
               if(newList == nullptr){
                 newList = nnode;
                 newListCurrent=nnode;
               
               }else{
                 newListCurrent->next = nnode;
                 newListCurrent=newListCurrent->next;
               }
               current1 = current1->next;
            }else{
                 ListNode* nnode = new ListNode(current2->val);
                       if(newList == nullptr){
                 newList = nnode;
                  newListCurrent=nnode;
            
               }else{
                 newListCurrent->next = nnode;
                 newListCurrent=newListCurrent->next;
               }
               current2 = current2->next;
            }

        }
        while (current1 != nullptr) {
    ListNode* nnode = new ListNode(current1->val);
   newListCurrent->next = nnode;
    newListCurrent = newListCurrent -> next;
 current1 = current1 -> next;
}
 while (current2 != nullptr) {
    ListNode* nnode = new ListNode(current2->val);
   newListCurrent->next = nnode;
    newListCurrent = newListCurrent -> next;
 current2 = current2 -> next;
}
        return newList;
    }
};