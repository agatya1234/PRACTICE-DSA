class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
         long long int m=*max_element(nums.begin(),nums.end());
        long long int count=0;
        long long int n=nums.size();
        long long int left=0;
       long long  int right=0;
        long long int ans=0;
        while(right<n){
            if(nums[right]==m)count++;
        while(count>=k){
            if(nums[left]==m)count--;
            left++;
            ans+=n-right;
        }
        
        right++;
        }
        return ans;
    }
};