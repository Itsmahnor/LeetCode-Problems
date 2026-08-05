class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s, 0, s.size() - 1);
    }

    void reverse(vector<char>& s, int left, int right) {
        // Base case
        if (left >= right)
            return;

        // Swap first and last
        swap(s[left], s[right]);

        // Recursively reverse the remaining part
        reverse(s, left + 1, right - 1);
    }
};