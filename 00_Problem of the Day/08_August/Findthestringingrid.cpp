
class Solution {
public:
bool isValid(int x, int y, int rows, int columns) {
    return (x >= 0 && x < rows && y >= 0 && y < columns);
}
vector<vector<int>> searchWord(vector<vector<char>> grid, string word) {
    int dx[] = {-1,-1,-1,0,0,1,1,1};
    int dy[] = {-1,0,1,-1,1,-1,0,1};

    vector<vector<int>>ans;
    int rows = grid.size();
    int columns = grid[0].size();
    int wLen = word.length();

    for (int i = 0; i <rows; i++) {
        for (int j = 0; j<columns; j++) {
            if (grid[i][j] == word[0]) {
                for (int k =0; k<8; k++) {
                    int curr_dx =dx[k];
                    int curr_dy =dy[k];
                    int x = i +curr_dx;
                    int y = j +curr_dy;
                    int idx=1;

                    while (idx <wLen && isValid(x, y, rows, columns) && grid[x][y] ==word[idx]) {
                        x+= curr_dx;
                        y+= curr_dy;
                        idx++;
                    }

                    if (idx==wLen) {
                        ans.push_back({i, j});
                        break;
                    }
                }
            }
        }
    }
    return ans;
  }
  
};
