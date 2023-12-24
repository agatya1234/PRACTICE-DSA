class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        int i=0;
        int j=0;
        string s;
       while(i<n || j<m){
           if(i<n)s=s+word1[i++];
           if(j<m)s=s+word2[j++];
       }
       return s;
        

    }
};