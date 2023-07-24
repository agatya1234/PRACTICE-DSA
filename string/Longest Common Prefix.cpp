class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)return "";
        if(strs.size()==1)return strs[0];
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string left=strs[0];
        string right=strs[n-1];
        string ans="";
        for(int i=0;i<left.size();i++){
            if(left[i]==right[i])
            ans=ans+left[i];
            else 
              return ans;
        }
        return ans;
    }
};