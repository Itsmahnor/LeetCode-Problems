class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0;
        int e=arr.size()-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(arr[s]<arr[mid] && arr[mid] > arr[e]){
                return mid;
            }
            else if(arr[s]<arr[mid] && arr[mid]<arr[e]){
                s=mid;
            }
            else{
                e=mid;
            }
        }
        return -1;
    }
};