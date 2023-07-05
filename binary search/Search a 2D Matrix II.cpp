class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    long long  int row=matrix.size();
    if(row==0)return false;
    long long   int col=matrix[0].size();
    if(col==0)return false;
    int r=col;
    for(vector<int>& row : matrix){
         auto it = upper_bound(row.begin(), row.begin() + r, target);
         if(it !=  row.begin() + r){
                r =  it - row.begin();
            }
            if(r == 0) return false;
            if(row[r-1] == target) return true;
        }
        
        return false;

   

    }
};