class Solution {
public:
    int trap(vector<int>& arr) {
        int n=arr.size();
       vector<int> lmax(n);
       lmax[0]=arr[0];
       for(int i=1;i<n;i++){
        int temp=max(arr[i],lmax[i-1]);
        lmax[i]=temp;
       }
        vector<int> rmax(n);
       rmax[n-1]=arr[n-1];
       for(int i=n-2;i>=0;i--){
        int temp=max(arr[i],rmax[i+1]);
        rmax[i]=temp;
       }
       int water=0;
       for(int i=0;i<n;i++){
        water+=abs(min(lmax[i],rmax[i])-arr[i]);
       }
       return water;
    }
};