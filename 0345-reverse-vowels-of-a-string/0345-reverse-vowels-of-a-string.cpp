class Solution {
public:
bool isvowel(char c){
    if(tolower(c)=='a' || tolower(c)=='e' || tolower(c)=='i' ||
    tolower(c)=='o' || tolower(c)=='u' ){
        return true;
    }
    return false;
}
    string reverseVowels(string s) {
        int i=0;
        int j=s.length() -1;
        while(i<j){
            if(isvowel(s[i]) && isvowel(s[j])){
                swap(s[i++],s[j--]);
            }else if(!isvowel(s[i])){
                i++;
            }else {
 j--;
            }
               
            }
            return s;
        }
    
};