class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>mh;
         
        vector<int>ans;
        for(auto i:nums){
            m[i]++;
        }
        for( auto i:m){
          mh.push({i.second,i.first});
          if(mh.size()>k)mh.pop();
        }
          while(k!=0){
              ans.push_back(mh.top().second);
              mh.pop();
              k--;
          } 

        return ans;
    }
};