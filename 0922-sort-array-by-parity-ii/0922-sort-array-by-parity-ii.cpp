class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
       int i = 0;
       int j = 1;
       while(j<nums.size() && i<nums.size()){
        if(nums[i] % 2 == 0){
            i=i+2;
        }else if(nums[j] % 2 != 0){
            j=j+2;
        }else if(nums[i] % 2 != 0 && nums[j] %2 == 0){
            swap(nums[i],nums[j]);
         
        }
           
       }  
       return nums;

    }
};