class Solution {
public:
    int countGoodSubstrings(string s) {
        int left=0;
        int n=s.size();
        int count=0;
        for(;left<=n-3;left++){
            if(s[left]!=s[left+1]&&s[left]!=s[left+2]&&s[left+1]!=s[left+2])
             count++;
     }
        return count;
    }
};