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
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> arr;
        ListNode* current = head;
        while(current != nullptr){
          arr.push_back(current -> val);
          current = current -> next;
        }
        int i=0;
        while(i<arr.size() && arr.size()   - i >= k ){
         reverse(arr.begin() + i,arr.begin()+ k+i);
            i=i+k;
        }
        ListNode* head1=nullptr;
        current = nullptr;
        for(int i=0;i<arr.size();i++){
            ListNode* val = new ListNode(arr[i]);
            if(head1 == nullptr){
                head1 = val;
                current = val;
            }else{
                current -> next = val;
                current = current -> next;
            }
        }
return head1;

    }
};