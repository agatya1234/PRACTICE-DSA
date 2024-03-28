class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0;
        int right=0;
        int count=0;
        unordered_map<int,int>ans;
        while(left<n &&right<n){
          ans[nums[right]]++;
          
          while(ans[nums[right]]>k){
            ans[nums[left]]--;
            left++;
          }
          count=max(count,right-left+1);
          right++;
        }
        return count;
    }
};