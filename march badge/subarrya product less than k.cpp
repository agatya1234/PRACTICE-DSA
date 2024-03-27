class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0;
        int right=0;
        int product=1;
        int count=0;
        if(k<=1)return 0;
        while(right<n){
             product*=nums[right];
             while(product>=k){//shrinking window
                product/=nums[left];//removing the left side element.
                left++;
             }
             count+=1+(right-left);
             right++;
        }
        return count;
    }
};