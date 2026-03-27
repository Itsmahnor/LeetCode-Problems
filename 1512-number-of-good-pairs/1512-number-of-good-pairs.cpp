class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        int count = 0;

        for(int i = 0; i < nums.size(); i++){
            // if number already seen, add its frequency to count
            if(mp.find(nums[i]) != mp.end()){
                count += mp[nums[i]];
            }
            // increase frequency
            mp[nums[i]]++;
        }

        return count;
    }
};