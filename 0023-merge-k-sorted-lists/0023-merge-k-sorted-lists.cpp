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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0){return nullptr;}
        vector<int> arr;
       for(int i=0;i<lists.size();i++){
        while(lists[i]!= nullptr){
            arr.push_back(lists[i] -> val);
            lists[i] = lists[i] -> next;
        }
       }
       sort(arr.begin(), arr.end());
       ListNode* head = nullptr;
       ListNode* current = nullptr;
       for(int i=0;i<arr.size();i++){
        ListNode* val = new ListNode(arr[i]);
        if(head == nullptr){
            head = val;
            current = val;
        }else{
            current -> next = val;
            current = current -> next;
        }
       }
       return head;
    }
};