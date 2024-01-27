class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int left=1;
        long long int right=num;
        if(num==1) return true;
        while(left<right){
         long long  int mid =(left+right)/2;
         long long int t=mid*mid;
         if(t==num)
         return mid;
         else if(t<num)
         left=mid+1;
         else 
         right=mid;
        }
        return false;
    }
};