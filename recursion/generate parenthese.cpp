class Solution {
public:
   void help(vector<string>&ans,int n,int open,int close,string op){
       if(open==0 && close==0){
           ans.push_back(op);
           return;
       }
       if(open>0){
           op.push_back('(');
           help(ans,n,open-1,close,op);
           op.pop_back();//this is use for backtrack.
           }
        if(close>open){
            op.push_back(')');
            help(ans,n,open,close-1,op);
            op.pop_back();
        }   
   }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        int open=n;
        int close=n;
        string op="";
        help(ans,n,open,close,op);
        return ans;
    }
};