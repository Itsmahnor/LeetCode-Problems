class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> s1;
        int count = 0;
        for(char c : s){
          if(c == '('){
            s1.push(c);
          }else{
            if(!s1.empty() && c == ')' && s1.top() == '('){
             s1.pop();
          }else{
            s1.push(c);
          }
          }
           
        }
        while(!s1.empty()){
            count++;
            s1.pop();
        }
        return count;
    }
};