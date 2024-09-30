class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
         vector<vector<string>> ans;
         unordered_map<string,vector<string>> umap;
         for(auto x:str){
            string temp=x;
            sort(x.begin(),x.end());
            umap[x].push_back(temp);
         }
         for(auto i:umap){
            vector<string> st=i.second;
            ans.push_back(st);
         }
         return ans;
    }
};