class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> s1;

        for (char c : s) {
            if (!s1.empty() && s1.top() == c) {
                s1.pop();
            } else {
                s1.push(c);
            }
        }

        string res;

        while (!s1.empty()) {
            res += s1.top();
            s1.pop();
        }  
          reverse(res.begin(), res.end());
        return res;
    }
};