class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
    long long  int row=matrix.size();
    long long   int col=matrix[0].size();
    long long int start=0;
    long long int end=(row*col)-1;
      
      while(start<=end){
          int mid=start+(end-start)/2;
          if(matrix[mid/col][mid%col]==target)
            return true;
            else if (matrix[mid/col][mid%col]<target)
                start=mid+1;
             else 
                end=mid-1;   
          
            
      }
       return false;
      
    }
}; 