class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int n = nums.size(), l = 1, r = n-1;
        
        while(l <= r){
            int mid = l + (r-l)/2;
            int cnt = 0;
            
            for(auto i:nums) if(i <= mid) cnt++;
            
            if(cnt <= mid) l = mid+1;
            
            else r = mid-1;
        }
        
        return l;
    }
};