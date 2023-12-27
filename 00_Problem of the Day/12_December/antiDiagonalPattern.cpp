class Solution {
  public:

    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        vector<int>res;
        int n = matrix.size();
        
        // this loop traverse the top left matrix 
        for(int i=0; i<n; i++) {
            int row = 0, col = i;
            
            while(col >= 0) {
                res.push_back(matrix[row][col]);
                col--;
                row++;
            }
        }
        
        // this loop traverse the bottom right matrix 
        for(int i=1; i<n; i++) {
            int row=i, col=n-1;
            while(row<n){
                res.push_back(matrix[row][col]);
                row++;
                col--;
            }
        }
        return res;
    }
};
