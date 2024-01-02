class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int maxi=0;
        while(left<right){
            int lh=height[left];
            int rh=height[right];
            int currentarea=min(lh,rh)*(right-left);
            maxi=max(maxi,currentarea);
            if(lh<rh){
                left++;
                }
            else{ 
                right--;
            }
        }
        return maxi;
    }
};