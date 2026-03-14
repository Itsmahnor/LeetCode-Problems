class Solution {
public:
    bool isPalindrome(string s) {
       string filtered;
       for(char c:s){
        if(isalnum(c)) {filtered+=tolower(c);}
       } 
       s=filtered;
       reverse(filtered.begin(),filtered.end());
       if(s==filtered){return true;}
       return false;
    }
};