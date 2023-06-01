class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int l=nums.size();
        vector<int>ans(l,0);
        for(int i=0;i<l;i++){
            ans[i]=nums[nums[i]];
        }
          return ans;
        
        
    }
};