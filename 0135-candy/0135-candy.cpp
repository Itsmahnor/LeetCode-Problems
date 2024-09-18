class Solution {
public:
    int candy(vector<int>& arr) {
        int n=arr.size();
      vector<int> newarr(n,1);
for(int i=1;i<arr.size();i++){
    if(arr[i] > arr[i-1] && newarr[i] <= newarr[i-1] ){
        newarr[i]=newarr[i-1]+1;
    }
}
for(int i=arr.size()-2;i>=0;i--){
    if(arr[i] > arr[i+1] && newarr[i] <= newarr[i+1]){
        newarr[i]=newarr[i+1]+1;
    }
}
int sum=0;
for(int i=0;i<newarr.size();i++){
    sum+=newarr[i];
}
return sum;
    }
};