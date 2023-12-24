class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2 != str2+str1)
            return "";
        if(str1 == str2)
            return str1;
        string res;
        int g = gcd(str1.size(), str2.size());
        for(int i=0; i<g; i++){
            if(str1[i] != str2[i])
                break;
            else
                res += str1[i];
        }
        return res;
    }
};