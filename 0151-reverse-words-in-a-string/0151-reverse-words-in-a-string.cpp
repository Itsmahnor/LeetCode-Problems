class Solution {
public:
    string reverseWords(string s) {
        int i = s.size() - 1;
        string ans;

        while (i >= 0) {
            // Skip spaces
            while (i >= 0 && s[i] == ' ') {
                i--;
            }
            // If we've reached the start of the string
            if (i < 0) {
                break;
            }
            // Find the end of the word
            int j = i;
            while (j >= 0 && s[j] != ' ') {
                j--;
            }
            // Append the word to the result
            if (ans.empty()) {
                ans = s.substr(j + 1, i - j);
            } else {
                ans += ' ' + s.substr(j + 1, i - j);
            }
            // Move the index back to continue processing
           i=j;
        }

        return ans;
    }
};
