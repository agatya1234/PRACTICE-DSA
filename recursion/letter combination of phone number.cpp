class Solution {
public:
 unordered_map<char, string> mp = {
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}
    };
    void help(string digits,int ind,vector<string>&ans,string output){
        if(ind>=digits.size()){
            ans.push_back(output);
            return;
        }
        string temp=mp[digits[ind]];
        for(int j=0;j<temp.size();j++){
            help(digits,ind+1,ans,output+temp[j]);
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        string output="";
        int ind=0;
        if(digits.size()==0)return {};
        help(digits,ind,ans,output);
        return ans;
    }
};