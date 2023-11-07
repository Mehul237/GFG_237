class Solution {
public:
    vector<int> sumTriangles(const vector<vector<int>>& matrix, int n) {
        
        int up = 0, lo = 0;
        
        for(int i=0; i<n; i++)
        
            for(int j=0; j<n; j++) {
                if(j >= i) up += matrix[i][j];
                if(j <= i) lo += matrix[i][j];
            }
        return {up, lo};
    }
};
