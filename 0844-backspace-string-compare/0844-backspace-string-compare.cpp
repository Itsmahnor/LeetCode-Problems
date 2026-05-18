class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
          stack<char> st1;
        for(char c : s){
            if(!st.empty() && c == '#'){
                st.pop();
            }else if(c != '#'){
                 st.push(c);
            }
           
        }
        for(char c : t){
            if(!st1.empty() && c == '#'){
                st1.pop();
            }else if(c != '#'){
                 st1.push(c);
            }
           
        }
        while(!st.empty() && !st1.empty()){
            if(st.top() != st1.top()){
               return false;
            }
            st.pop();
            st1.pop();
        }
        return st.empty() && st1.empty();

    }
};