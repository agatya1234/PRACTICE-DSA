class Solution {
public:
   int caneat(vector<int>& piles,int mid,int h){
       int actualhour=0;
       for(int i:piles){
           actualhour+=i/mid;
           if(i%mid!=0){
               actualhour++;
           }
       }
       return actualhour<=h;
   }
  
   int minEatingSpeed(vector<int>& piles, int h) {
       int l=1;
       int r=*max_element(begin(piles),end(piles));
       while(l<r){
           int mid=l+(r-l)/2;
           if(caneat(piles,mid,h)){
               r=mid;
           }
           else{
               l=mid+1;
           }
       }
       return l;
   }
};