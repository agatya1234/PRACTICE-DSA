class Solution {
public:
   void help(int ind,vector<vector<int>>&ans,vector<int>&nums){
       int n=nums.size();
       if(ind==n){
           ans.push_back(nums);
           return;
       }
       for(int i=ind;i<n;i++){
           swap(nums[ind],nums[i]);
           help(ind+1,ans,nums);
           swap(nums[ind],nums[i]);
       }
   }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
       vector<vector<int>>ans;
        help(0,ans,nums);
        return ans;
    }
};