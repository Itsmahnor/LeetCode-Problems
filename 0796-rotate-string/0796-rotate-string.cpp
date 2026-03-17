class Solution {
public:
    bool rotateString(string s, string goal) {
       int n=s.length();
       int i =0;
       int j=1;
       if(s == goal){
        return true;
       }
    while(i<n && j<n){

        string f = s.substr(0,i+1);
        string b = s.substr(j,n);
        if(b+f == goal){
            return true;
        }
        i++;
        j++;
    }
    return false;
    }
};