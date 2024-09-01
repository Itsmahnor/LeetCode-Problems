class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()==1 || nums.size()==2){
            return -1;
        }
        sort(nums.begin(),nums.end());
        int size=nums.size()-1;
        int ans=size/2;
        cout<<nums[ans];
        return nums[ans];
    }
};