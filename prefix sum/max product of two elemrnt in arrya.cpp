class Solution {
public:
    int maxProduct(vector<int>& nums) {
       priority_queue<int>pq;
    
       for(int i=0;i<nums.size();i++){
           for(int j=i+1;j<nums.size();j++){
           int ans=(nums[i]-1)*(nums[j]-1);
           pq.push(ans);
       } 
       }
       return pq.top();
    }
};