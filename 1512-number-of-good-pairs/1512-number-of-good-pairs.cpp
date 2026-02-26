class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int i=0,j=1;
        int count =0;
    while(i<nums.size()-1){
         if(j == nums.size()){
        i++;
        j=i+1;
        continue;
     }
        if(nums[i] == nums[j] && i<j){
          count++;
         
        }
    j++;
    }
    return count;
    }
};