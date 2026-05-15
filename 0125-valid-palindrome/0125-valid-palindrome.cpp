class Solution {
public:
    bool isPalindrome(string s) {
        string a;
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){

                a+=tolower(s[i]);
            }
        }
        string rev = a;
        reverse(rev.begin(),rev.end());
        if(rev == a){
            return true;
        }else{
            return false;
        }
    }
};