class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<char,int>mp1;
        map<char,int>mp2;
        vector<int>v1;
        vector<int>v2;
        for(auto x:word1){
            mp1[x]++;
        }
        for(auto x:word2){
            mp2[x]++;
        }
        for(auto x:mp1){
            if(mp2[x.first]==0)return false;
            v1.push_back(mp1[x.first]);
            v2.push_back(mp2[x.first]);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        return v1==v2;
    }
};