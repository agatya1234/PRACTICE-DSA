class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int start=0,zerocount=0;
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                zerocount++;
            }
            while(zerocount>k){
                if(nums[start]==0){
                    zerocount--;
                }
                start++;
            }
            ans=max(i-start+1,ans);
        }
        return ans;
    }
};