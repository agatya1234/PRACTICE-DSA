class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<nums.size();i++)
            pq.push(nums[i]);
            int current_min=0;
            int count=0;
            while(!pq.empty()){
                if(pq.top()==0)pq.pop();
                else{
                    int top=pq.top()-current_min;
                    if(top!=0){
                        current_min+=top;
                        count++;
                    }
                    pq.pop();
                }
            }
        
        return count;
    }
};