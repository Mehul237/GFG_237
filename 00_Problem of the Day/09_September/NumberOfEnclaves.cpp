

class Solution {
  public:
    
    int numberOfEnclaves(vector<vector<int>> &grid) {
        
       int m = grid.size();
       int n = grid[0].size();
       int count = 0;
       
        for(int i = 0; i<m; i++) {
            for(int j = 0; j<n; j++) {
                if((i == 0 || i == m-1 )||(j == 0 || j == n-1)) bfs(grid, i, j, m, n);
            }
        }
        
        for(int i = 1; i<m-1; i++) {
            for(int j = 1; j<n-1; j++) {
                if(grid[i][j] == 1) count++;
            }
        }    
        return count;       
    }
    
    void bfs(vector<vector<int>> &grid, int a, int b, int m, int n) {
       if (a < 0 || a >= m || b < 0 || b >= n || grid[a][b] != 1) {
        return;
    }
    
    grid[a][b] = 2;
    bfs(grid, a-1, b, m, n);
    bfs(grid, a+1, b, m, n);
    bfs(grid, a, b-1, m, n);
    bfs(grid, a, b+1, m, n);
    }
};
