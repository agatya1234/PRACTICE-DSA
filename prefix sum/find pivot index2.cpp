class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalsum=0;
        int left=0;
        for(auto i:nums){
              totalsum+=i;
        }
        for(int i=0;i<nums.size();left+=nums[i++]){
         if(left*2==totalsum-nums[i])
         return i;
        }
         return -1;
    }
};