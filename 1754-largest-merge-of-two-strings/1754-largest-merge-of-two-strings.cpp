class Solution {
public:
 
    string largestMerge(string word1, string word2) {
        int i=0;
        int j=0;
        string res;
        while(i<word1.length() && j<word2.length()){
           if(word1.substr(i) > word2.substr(j)){
             res+=word1[i++];
           }else{
            res+=word2[j++];
           }
        }
        while(i<word1.length()){
            res+=word1[i++];
        }
         while(j<word2.length()){
            res+=word2[j++];
        }
        return res;
    }
};