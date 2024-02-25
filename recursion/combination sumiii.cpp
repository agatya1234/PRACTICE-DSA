class Solution {
public:
     void help(int ind,int sum,vector<int>&v,vector<int>&ds,vector<vector<int>>&ans){
         if(sum==0){
             ans.push_back(ds);
             return;
         }
        for(int i=ind;i<v.size();i++){
           if(i>ind && v[i]==v[i-1])continue;
            if(v[i]>sum)break;
             ds.push_back(v[i]);
            help(i+1,sum-v[i],v,ds,ans);
            ds.pop_back();
        }

     }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>v={1,2,3,4,5,6,7,8,9};
        vector<vector<int>>ans;
        vector<int>ds;
        help(0,n,v,ds,ans);
        for(int j=0;j<ans.size();j++){
            if(ans[j].size()!=k){
                ans.erase(ans.begin()+j);
                if(ans.empty())break;
                j--;
            }
        }
        return ans;
    }
};