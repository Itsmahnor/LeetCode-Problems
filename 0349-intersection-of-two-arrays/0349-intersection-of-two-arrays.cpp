class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,bool> m;
        vector<int> arr;
        for(int c:nums1){
            m[c]=true;
        }
        for(int c:nums2 ){
            if(m.find(c)!=m.end() && find(arr.begin(),arr.end(),c)==arr.end()){
                arr.push_back(c);
            }
        }
        return arr;
    }
};