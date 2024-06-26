class Solution {
   void mark_current_island(vector<vector<char>>& matrix, int x, int y, int r, int c) {
    if (x < 0 || x >= r || y < 0 || y >= c || matrix[x][y] != '1')
       return;
    matrix[x][y] = '2'; // Mark current cell as visited
    mark_current_island(matrix, x + 1, y, r, c);
    mark_current_island(matrix, x, y + 1, r, c);
    mark_current_island(matrix, x - 1, y, r, c);
    mark_current_island(matrix, x, y - 1, r, c);
  }
public:
    int numIslands(vector<vector<char>>& grid) {
     int row = grid.size();
     int col = grid[0].size();
     int count = 0;
     for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (grid[i][j] == '1') {
                mark_current_island(grid, i, j, row, col);
                count++;
            }
        }
     } 
     return count;  
    }
};
