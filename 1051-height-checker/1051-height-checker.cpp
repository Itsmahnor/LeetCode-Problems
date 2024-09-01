class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected=heights;
        sort(heights.begin(),heights.end());
        int s=0;
        for(int i=0;i<heights.size();i++){
            if(heights[i] != expected[i]){
                s++;
            }

        }
        return s;
    }
};