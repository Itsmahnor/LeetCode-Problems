class Solution {
public:
    string makeGood(string s) {
      string s2;
      stack<char> s1;
      for(char c:s){
        if(!s1.empty() && tolower(c) == tolower(s1.top()) && c!=s1.top()){
            s1.pop();
        }
        else{
           s1.push(c);
        }
      }
      while (!s1.empty()) {
            s2 = s1.top() + s2;
         
            s1.pop();
        }
      return s2;
    }
};