class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m=word1.size(),n=word2.size();
        int i=0;
        int j=0;
        string ans;
        while(i<m||j<n){
            if(i<m) ans+=word1[i++];
            if(j<n) ans+=word2[j++];
        }
        return ans;
    }
};