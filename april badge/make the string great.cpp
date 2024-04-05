class Solution {
public:
    string makeGood(string s) {
       stack<char>ans;
       int ind=0;
        for(int i=0;i<s.size();i++){
            if(!ans.empty() &&(s[i]+32==ans.top() || s[i]-32==ans.top()))
            {
                ans.pop();
            }
            else{
            ans.push(s[i]);
            }
        }
         string result;
         while(!ans.empty()){
            result=ans.top()+result;
            ans.pop();
         }
         return result;
    }
};