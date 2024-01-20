class Solution {
public:
   int start=0;
   string solve(string &s){
       string ans="";
       while(start<s.size() &&s[start]>='a' && s[start]<='z'&& s[start]!='[')
           ans.push_back(s[start++]);
           if(start>=s.size() || s[start]==']') return ans;
           string num="";
           while(s[start]!='[')
               num.push_back(s[start++]);
               int n=stoi(num);
               start++;
           
           string repeat=solve(s);
           for( int k=0;k<n;k++)
               ans+=repeat;
           
           start++;
           return ans+solve(s);
       }
   
    string decodeString(string s) {
      
        return solve(s);
    }
};