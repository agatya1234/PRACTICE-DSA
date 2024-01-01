class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        string s="";
        if(n==1)return 1;
        chars.push_back('*');
        int count=1;
        
        for(int i=0;i<n;i++){
            char c=chars[i];
        if(chars[i+1]==c)count++;
        
        else{
            s=s+c;
            if(count>1){
                s=s+to_string(count);
                count=1;
            }
        }
        
        for(int i=0;i<s.size();i++){
            chars[i]=s[i];
        }
}
      return s.size();
    }
};