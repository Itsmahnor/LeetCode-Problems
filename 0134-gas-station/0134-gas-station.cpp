class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int diff=0,index=0, n=gas.size(),total=0;
        for(int i=0;i<n;i++){
           int D=gas[i]-cost[i];
           diff+=D;
           total+=D;
           if(diff < 0){
            index=i+1;
            diff=0;
           } 
        }
        return total<0?-1:index;
    }
};