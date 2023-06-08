class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool isCol = false,isRow = false;    //to check if any row or column contains 0
        int m = matrix.size();       //Row length
        int n = matrix[0].size();   //Column Length
        
		//marking the rows and columns containing Zeroes in first row and first column of matrix
        for(int i=0;i<m;i++){
            if (matrix[i][0] == 0) {    // checking if first col contains zero
                isCol = true;
              }
            for(int j=0;j<n;j++){
                if(i==0 && matrix[i][j]==0) isRow=true;   //checking if First row contains zero
                
                if(matrix[i][j]==0){
                    matrix[i][0]=0;  //first row
                    matrix[0][j]=0;  //first column
                }
            }
        }
        
		//Marking in rest of array
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if((matrix[i][0]==0 || matrix[0][j]==0)){
                    matrix[i][j] = 0;
                }
            }
        }
        
        //Marking Zeroes in First Row
        if (isRow) {
          for (int j = 0; j < n; j++) {
            matrix[0][j] = 0;
          }
        }
        
        //Marking Zeroes in First Column
        if (isCol) {
          for (int i = 0; i < m; i++) {
            matrix[i][0] = 0;
          }
        }
    }
};