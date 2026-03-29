class Solution {
public:
  
        int missingNumber(vector<int>& nums) {
        unordered_map<int,bool> map;
        for(int num : nums){
            map[num]=true;
        }
        for(int i=0;i<nums.size()+1;i++){
            if(map.find(i) == map.end()){
                return i;
            }
        }

        return -1;
    }
    
};