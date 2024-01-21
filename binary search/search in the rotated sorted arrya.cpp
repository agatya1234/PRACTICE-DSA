class Solution {
    public:
    int  search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        int mid;
        while(left<=right){
            mid = left+(right-left)/2;
            if(nums[mid]==target)
                return mid;
            
            else if(nums[mid]>=nums[left]){
                if(nums[mid]>target && target>=nums[left])
                    right=mid-1;
                
                else
                    left=mid+1;
                
            }
            else{
                if(nums[mid]<target&& target<=nums[right])
                    left=mid+1;
                
                else
                    right=mid-1;
                
            }
        }
        return -1;
    }
};  