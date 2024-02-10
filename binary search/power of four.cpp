class Solution {
public:
    bool isPowerOfFour(int n) {
      int l=0;
      int r=1e9;
      while(l<=r){
          int mid=(l+r)/2;
          if(pow(4,mid)==n)return true;
          else if(pow(4,mid)>n)r=mid-1;
          else l=mid+1;
      } 
      return false; 
    }
};