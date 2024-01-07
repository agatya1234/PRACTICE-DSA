 class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        vector<int>ans;
        unordered_map<int,int>mapp;
        for(int i=0;i<nums.size();i++){
            if(mapp.find(target-nums[i])!=mapp.end()){
                ans.push_back(mapp[target-nums[i]]);
                ans.push_back(i);
                //return ans;
            }
            mapp[nums[i]]=i;

        }
        return ans;
     
        }
     

    };  