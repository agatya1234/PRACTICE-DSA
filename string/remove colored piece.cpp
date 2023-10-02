class Solution {
public:
    bool winnerOfGame(string colors) {
        int alisa=0;
        int bob=0;
        for(int i=1;i<colors.size()-1;i++){
            char currentcolor=colors[i];
            char prevcolor=colors[i-1];
            char nextcolor=colors[i+1];
            if(currentcolor=='A' && prevcolor=='A' && nextcolor=='A')
                alisa++;
             else if(currentcolor=='B' && prevcolor=='B' && nextcolor=='B')
                bob++;
            
        }
        return alisa > bob;
    }
};