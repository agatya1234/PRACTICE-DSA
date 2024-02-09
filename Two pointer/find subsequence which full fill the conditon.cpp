class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int m=1e9+7;
        int s=0;
        int e=n-1;
        int ans=0;
        vector<int>power(n);
        power[0]=1;
        for(int i=1;i<n;i++){
            power[i]=(power[i-1]*2)%m;
        }
        while(s<=e){
            if(nums[s]+nums[e]<=target){
                ans=(ans%m + power[e-s])%m;
                s++;
            }
            else{
                e--;
            }
        }
        return ans;
    }
};