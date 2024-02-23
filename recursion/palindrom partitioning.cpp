class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>res;
        partition(0,s,ans,res);
        return ans;
    }
    void partition(int ind, string s,vector<vector<string>>&ans,vector<string>&res){
        if(ind==s.size()){
        ans.push_back(res);
        return;
        }
    for(int i=ind;i<s.size();i++){
        if(ispalindrom(s,ind,i)){
            res.push_back(s.substr(ind,i-ind+1));
            partition(i+1,s,ans,res);
            res.pop_back();
        }
    }
    }
    bool ispalindrom(string s,int start,int end){
        while(start<=end){
            if(s[start++]!=s[end--])return false;
    }
    return true;
        }
    
};