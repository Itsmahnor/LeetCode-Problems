class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max=0;
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        return ((nums[n]-1)*(nums[n-1]-1));
    }
};