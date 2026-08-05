class Solution {
public:
    bool isPalindrome(string s) {
        return check(s, 0, s.length() - 1);
    }

    bool check(string &s, int left, int right) {

        // Base case
        if (left >= right)
            return true;

        // Skip non-alphanumeric from left
        if (!isalnum(s[left])) {
            return check(s, left + 1, right);
        }

        // Skip non-alphanumeric from right
        if (!isalnum(s[right])) {
            return check(s, left, right - 1);
        }

        // Compare lowercase characters
        if (tolower(s[left]) != tolower(s[right]))
            return false;

        // Move both pointers
        return check(s, left + 1, right - 1);
    }
};