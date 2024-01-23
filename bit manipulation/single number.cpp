class Solution {
public:
    int singleNumber(vector<int>& v) {
        sort(v.begin(),v.end());
        map<int ,int> mp;
        for (int i = 0; i < v.size(); i++)
        {
           
            mp.insert({v[i],mp[v[i]]++});
        }
        int ans=0;
        for (auto &i:mp )  {
        
            if(i.second==1){
                ans=i.first;
                break;
            }
        }
            
        
        return ans;
        
    }
};