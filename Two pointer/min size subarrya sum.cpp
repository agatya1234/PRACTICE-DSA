class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int length=INT_MAX;
        int sum=0;
       int i=0;
       int j=0;
       
      while(j<n){
           if(sum+nums[j]>=target){
               length=min(length,j-i+1);
               sum=sum-nums[i];
               i+=1;
           }
           else{
               sum=sum+nums[j];
               j+=1;
           }
            
       }
       if(length!=INT_MAX)return length;
       else return 0;
    }
};