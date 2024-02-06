class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        if (nums.size()==0) return {};
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i=i+2){
           swap(nums[i],nums[i+1]);
        }
         return nums; 
    }
};