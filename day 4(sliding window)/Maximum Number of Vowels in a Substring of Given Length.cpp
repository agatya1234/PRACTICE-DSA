class Solution {
public:
int isvowel(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        return 1;
    }
    return 0;
}
    int maxVowels(string s, int k) {
        int n=s.size();
        int count=0;
        for(int i=0;i<k;i++){
            count+=isvowel(s[i]);
        }
        int maxcount=count;
        for(int i=k;i<n;i++){
        count=count-isvowel(s[i-k])+isvowel(s[i]);
        maxcount=max(maxcount,count);
        }
        return maxcount;
}
        
};