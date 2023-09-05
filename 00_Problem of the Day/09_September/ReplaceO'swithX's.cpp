


// Flood-Fill algorithm. 

class Solution {
public:
    int N, M;
    void floodFillUtil(vector<vector<char>> &screen, int x, int y, 
                        char prevC, char newC) {
                            
        // Base cases
        if (x < 0 || x >= N || y < 0 || y >= M)
            return;
        if (screen[x][y] != prevC)
            return;
            
        // Replace the color at (x, y)
        screen[x][y] = newC;
        floodFillUtil(screen, x+1, y, prevC, newC);
        floodFillUtil(screen, x-1, y, prevC, newC);
        floodFillUtil(screen, x, y+1, prevC, newC);
        floodFillUtil(screen, x, y-1, prevC, newC);
    }
    
    
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat) {
        
        N = n;
        M = m;
        vector<vector<char>> temp = mat;
        
        for(int i = 0;i < n;i++)
		    for(int j = 0;j < m;j++)
		        if(temp[i][j] == 'O')
		            temp[i][j] = '-';
		
		for(int i = 0;i < n;i++)
			if(temp[i][0] == '-')
			    floodFillUtil(temp, i, 0, '-', 'O');
		
		for(int i = 0;i < n;i++)
			if(temp[i][m-1] == '-')
			    floodFillUtil(temp, i, m-1, '-', 'O');
			
		for(int i = 0;i < m;i++)
			if(temp[0][i] == '-')
			    floodFillUtil(temp, 0, i, '-', 'O');
			
		for(int i = 0;i < m;i++)
			if(temp[n-1][i] == '-')
			    floodFillUtil(temp, n-1, i, '-', 'O');
		
		for(int i = 0;i < n;i++)
			for(int j = 0;j < m;j++)
				if(temp[i][j] == '-')
				    temp[i][j] = 'X';
	    return temp;
    }
};
