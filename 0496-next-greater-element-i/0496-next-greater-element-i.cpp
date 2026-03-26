class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       vector<int> res;
       unordered_map<int,int> map; 
        for(int i=0;i<nums2.size();i++){
           map[nums2[i]] = i;
        }
        for(int i=0;i<nums1.size();i++){
                int ind = map[nums1[i]];
                int j = ind+1;
                bool flag = false;
            while(j<nums2.size()){
                if(nums2[ind] < nums2[j] ){
                    res.push_back(nums2[j]);
                    flag = true;
                    break;
                }
                j++;
            }
            if(!flag){
                res.push_back(-1);
            }

     
        }
        return res;
    }
};