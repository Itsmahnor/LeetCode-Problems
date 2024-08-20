class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
      unordered_map<char,bool> m;
      int count=0;
      for(char c:jewels){
        m[c]=true;
      }
      for(char c:stones){
        if(m.find(c)!=m.end()){
            count++;
        }
      }

      return count;
    }
};