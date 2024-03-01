class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth = -1;
        for(int i = 0; i < accounts.size(); i++) {
            int temp_sum = 0;
            for(int j = 0; j < accounts[i].size(); j++) {
                temp_sum += accounts[i][j];
            }
            if(temp_sum > wealth) {
                wealth = temp_sum;
            }
        }
        return wealth;
    }

};