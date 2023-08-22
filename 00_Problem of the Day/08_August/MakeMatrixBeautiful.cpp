
class Solution {
    public:

    int findMinOpeartion(vector<vector<int> > matrix, int N) {
        
        int maxSum = INT_MIN;    // Calculate maxSum of row and column
        vector <int> row;        // Store rowSum in row vector 
        vector <int> column;     // Above apply for the column
    
        
        // N * N Matrix
        
        for(int i=0; i<N; i++) {   // Outer-loop, row
            
          int rowSum = 0;
          int columnSum = 0;
            
          for(int j=0; j<N; j++) {  // Inner-loop, column
             
             rowSum += matrix[i][j];
             columnSum += matrix[j][i];
              
          }
          
          maxSum = max(maxSum, max(rowSum, columnSum));
          row.push_back(rowSum);
          column.push_back(columnSum);
        }
        
        int ans = 0;
        
        for(int i=0; i<N; i++) {
            
            ans += maxSum - row[i];
           // ans += maxSum - column[i];
        }
        return ans;
    } 
};
