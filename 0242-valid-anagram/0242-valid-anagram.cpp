class Solution {
public:
   
bool isAnagram(string s, string t) {
   if(s.size()!=t.size()){return false;}
   unordered_map<char,int> m1;
   unordered_map<char,int> m2;
   for(auto i:s){
    m1[i]++;
   }
     for(auto i:t){
    m2[i]++;
   }
   for(auto i:s){
    if(m1[i] != m2[i]){
        return false;
    }
   }
   return true;
}
};