
// Q-link -> https://practice.geeksforgeeks.org/problems/transpose-of-matrix-1587115621/1

class Solution {   
    public:  

   void transpose(vector<vector<int> >& matrix, int n) { 

        vector<vector<int>> temp=matrix;
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                matrix[i][j] = temp[j][i];
            }
        }
    }
};
