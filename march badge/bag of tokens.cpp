class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int n=tokens.size();
        int left=0;
        int right=n-1;
        int score=0;
        int max_score=0;
        while(left<=right){
            if(tokens[left]<=power){
                power-=tokens[left];
                score++;
                left++;
                max_score=max(max_score,score);
            }
            else if(score>=1){
                power+=tokens[right];
                score--;
                right--;
                }
                else{
                    break;
                }
        }
        return max_score;
    }
};