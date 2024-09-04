// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
    long long  int s=0;
     long long int e=n;
      int midvalue;
      while(s<=e){
       long long int mid=(s+e)/2;
        if(isBadVersion(mid)==true){
            midvalue=mid;
            e=mid-1;
        }

        else{
            s=mid+1;
        }
      }
      return midvalue;
    }
};