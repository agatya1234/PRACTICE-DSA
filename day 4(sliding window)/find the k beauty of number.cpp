class Solution {
public:
    int divisorSubstrings(int num, int k) {
        //a function that returns the string value of integers, decimals, exponents, and expressions after calculation. 
        const string s = to_string(num);
        int count=0;
        for(int i=0;i<=s.size()-k;i++){
            //use to change string into integer.
            const int x = stoi(s.substr(i, k));
            if(x!=0 && num%x==0)
            count++;
        }
        return count;
    }
};