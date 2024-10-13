class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                s1.push(c);
            } else if (!s1.empty()) {
                if (c == ')' && s1.top() != '(') {
                    return false;
                } else if (c == '}' && s1.top() != '{') {
                    return false;
                } else if (c == ']' && s1.top() != '[') {
                    return false;
                }
                s1.pop();
            } else {
                return false; 
            }
        }
        
        return s1.empty(); 
    }
};