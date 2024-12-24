class Solution {
public:
    int maxArea(vector<int>& height) {
    int maxWater=0;
    int n=height.size();
    int l=0;int r=n-1;
    while(l<r){
        int area=min(height[l],height[r])*(r-l);
        maxWater=max(maxWater,area);
        if(height[l] < height[r]){
            l++;
        }
        else{
            r--;
        }
    }
 return maxWater;      
    }
};