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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    if(head == nullptr) {
        return nullptr; // Handle the case of an empty list
    }

    // Special case: if head is the only node and n is 1
    if(head->next == nullptr && n == 1) {
        delete head;
        return nullptr;
    }

    ListNode *fast = head;
    ListNode *slow = head;
    // Move fast pointer n steps ahead
    for (int i = 0; i < n; i++) {
        fast = fast->next;
    }
    // If fast pointer has reached the end, remove the head node
    if (fast == nullptr) {
        ListNode *toBeRemoved = head;
        head = head->next;
        delete toBeRemoved;
        return head;
    }
    // Move fast to the end, maintaining the gap of n nodes
    while (fast->next != nullptr) {
        fast = fast->next;
        slow = slow->next;
    }
    // Remove the nth node from the end
    ListNode *toBeRemoved = slow->next;
    slow->next = slow->next->next;
    delete toBeRemoved;
    return head;
}

};