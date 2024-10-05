class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
         unordered_map<string,vector<string>> umap;
         for(auto x:str){
           string temp=x;
           sort(temp.begin(),temp.end());
            umap[temp].push_back(x);
         }
         vector<vector<string>> str1;
         for(auto i:umap){
            vector<string> arr=i.second;
            str1.push_back(arr);
         }
         return str1;
    }
};