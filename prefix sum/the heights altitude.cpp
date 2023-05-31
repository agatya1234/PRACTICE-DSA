class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>ans;
        int n=gain.size();
        ans.push_back(0);
        for(int i=0;i<n;i++){
            int val=ans[i]+gain[i];
            ans.push_back(val);
        }
        sort(ans.begin(),ans.end());
        return ans[n];


    }
};