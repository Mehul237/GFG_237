

class Solution {
  public:
  
  int dir[5] = {0, 1, 0, -1, 0};
  
    int shortestDistance(int N, int M, vector<vector<int>> grid, int X, int Y) {
        
        int ans = (N*M);
        queue < pair <int, pair<int, int >>> q;
        q.push({0, {0, 0}});
        vector<vector<int>>visited(N, vector<int>(M, 0));
        visited[0][0] = 1;
        
        while(!q.empty()) {
            
            auto top = q.front();
            q.pop();
            int st = top.first;
            int x = top.second.first;
            int y = top.second.second;
            
            if(x==X && y==Y) {
                ans = min(ans,st);
                continue;
            }
            
            for(int i=0; i<4; i++) {
                
                int nx = x + dir[i];
                int ny = y + dir[i+1];
                if(nx >= 0 && ny >= 0 && nx < N && ny < M && visited[nx][ny]==0 && grid[nx][ny]==1) {
                    q.push({st + 1, {nx, ny}});
                    visited[nx][ny] = 1;
                }
            }
        }
        return ans==N*M?-1:ans;
    }
};

