class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int count_of_zero=0;
        int total=0;
        int mx=0;
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){count_of_zero++;
            while(count_of_zero>1){
                if(nums[j]==0)count_of_zero--;
                else total--;
                j++;
            }
            }
            else{
                total++;
                mx=max(mx,total);
            }
            
        }
        if(mx==nums.size())return --mx;
        return mx;

    }
};