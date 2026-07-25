class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode* current = head;

        // Count total nodes
        while (current != nullptr) {
            count++;
            current = current->next;
        }

        int mid = count / 2;

        current = head;

        // Move to middle
        for (int i = 0; i < mid; i++) {
            current = current->next;
        }

        return current;
    }
};