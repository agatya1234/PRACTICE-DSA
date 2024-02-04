class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
       int n=nums1.size();
       vector<pair<int,int>>pq;
       for(int i=0;i<n;i++)pq.push_back({nums2[i],nums1[i]});
       sort(rbegin(pq),rend(pq));//r is use to sort in decreasing
       priority_queue<int,vector<int>,greater<int>>pqq;
       int sum=0;
       int ans=0;
       for(int i=0;i<n;i++){
            pqq.push(pq[i].second);
            sum=sum+pq[i].second;
            if(pqq.size()>k){
                sum=sum-pqq.top();
                pqq.pop();
            }
            if(pqq.size()==k){
                ans=max(ans,sum*pq[i].first);
            }
       }  
          return ans;

    }
};