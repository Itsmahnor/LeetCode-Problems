class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
   unordered_map<int,int> m1;
   for(int i=0;i<nums.size();i++){
    m1[nums[i]]=i;
   }
   for(int i=0;i<nums.size();i++){
    int value=target-nums[i];
    if(m1.find(value) != m1.end() && m1[value] !=i){
        return {i,m1[value]};
    }
   }
   return {};
      }
    
};