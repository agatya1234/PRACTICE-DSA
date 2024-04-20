class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int n=land.size();
        int m=land[0].size();
        vector<vector<int>>ans;
        for(int r1=0;r1<n;r1++){
            for(int c1=0;c1<m;c1++){
                int r2=r1,c2=c1;
                if(land[r1][c1]){
                    for(r2=r1;r2<n && land[r2][c1];r2++){
                        for(c2=c1;c2<m && land[r2][c2];c2++){
                            land[r2][c2]=0;
                        }
                    }
                    ans.push_back({r1,c1,r2-1,c2-1});
                }
            }
        }
        return ans;
    }
};