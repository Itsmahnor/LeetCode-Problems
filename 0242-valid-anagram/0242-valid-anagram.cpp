class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
       int arr[26] ={0};
       int arr1[26] ={0};
      
        for(int i=0;i<s.length();i++){
            int value = s[i] - 'a';
            arr[value]++;
        }
         for(int i=0;i<t.length();i++){
            int value = t[i] - 'a';
            arr1[value]++;
        }
        bool results = false;
      for(int i=0;i<=25;i++){
         
     
        if(arr[i] == arr1[i]){
            results=true;
        }else{
            return false;
        }
        }  

        return results;   
    }
};