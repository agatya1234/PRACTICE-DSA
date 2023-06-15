class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int right=nums[0];
       int left=nums[0];
       do{
           right=nums[right];
           left=nums[nums[left]];
       }
       while(right!=left);
           right=nums[0];
       
       while(right!=left){
           left=nums[left];
           right=nums[right];       
           }
           return left;
 }
  };