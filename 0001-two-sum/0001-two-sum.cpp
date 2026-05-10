class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector <pair<int,int>>  arr1;
       for(int i=0;i<nums.size();i++){
              arr1.push_back({nums[i],i});
       }
       sort(arr1.begin(),arr1.end());
       int i=0;
       int j=nums.size()-1;
       while(i<j){
        if(arr1[i].first + arr1[j].first == target){
            return {arr1[i].second,arr1[j].second};
        }
        else if(arr1[i].first + arr1[j].first > target){
            j--;
        }else{
            i++;
        }
       }
       return {-1,-1};
    }
};