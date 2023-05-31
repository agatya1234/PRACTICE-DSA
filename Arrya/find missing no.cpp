class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int allxor = 0;
      for(int i=0;i<=nums.size();i++){
          allxor=allxor^i;
      } 
      for(int num:nums){
          allxor=allxor^num;
      }
      return allxor;
    }
};