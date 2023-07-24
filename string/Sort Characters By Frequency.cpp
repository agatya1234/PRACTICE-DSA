class Solution {
public:
    string frequencySort(string s) {
       unordered_map<char,int>mp;
       for(int i=0;i<s.size();i++){
           mp[s[i]]++;
       }
       priority_queue<pair<int,char>>m;
       for(auto i :mp){
           m.push({i.second,i.first});
       }
       string ans="";
       while(!m.empty()){
           pair<int ,char>p=m.top();
           m.pop();
           while(p.first--){
               ans+=p.second;
           }
       }
       return ans;
    }
};