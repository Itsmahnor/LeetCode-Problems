class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        int arr[256] ={0};
        int arr1[256] ={0};
        for(int i=0;i<s.length();i++){
            char sc=s[i], tc=t[i];
            if(arr[sc] == 0 && arr1[tc] == 0){
                arr[sc] = tc;
                arr1[tc] = sc;
            }else{
                 if (arr[sc] != tc || arr1[tc] != sc) {
                    return false;
                }
            }
        }
        return true;
    }
};