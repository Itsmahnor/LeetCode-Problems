class Solution {
public:
    int majorityElement(vector<int>& arr) {
    int majoriElement=arr[0];
    int ind=1;
    for(int i=1;i<arr.size();i++){
        if(arr[i] ==majoriElement){
            ind++;
        }
        else{
            ind--;
        }
        cout<<ind<<" ";
        if(ind==0){
           majoriElement=arr[i];
            ind=1;
        }
    }
    return majoriElement;
    }
};