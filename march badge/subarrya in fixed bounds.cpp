class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int left=-1;
        int right=-1;
        int j=-1;
        long long int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<minK || nums[i]>maxK)
            j=i;
            if(nums[i]==minK)
               left=i;
            if(nums[i]==maxK)
            right=i;
            ans+=max(0,min(left,right)-j);
        }
        return ans;
    }
};