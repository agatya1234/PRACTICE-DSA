class Solution {
public:
    int maxDepth(string s) {
       int count=0;
       int max_count=0;
       for(char c:s){
        if(c=='('){
            count++;
            if(max_count<count)
             max_count=count;
        }else if(c==')'){
            count--;
        }
       }
       return max_count;
    }
};