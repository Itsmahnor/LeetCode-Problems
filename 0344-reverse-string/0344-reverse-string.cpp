class Solution {
public:
    void reverseString(vector<char>& s) {
     int s1=0;
     int e=s.size()-1;
     while(s1<e){
        int temp=s[s1];
        s[s1]=s[e];
        s[e]=temp;

        s1++;
        e--;
     }
    }
};