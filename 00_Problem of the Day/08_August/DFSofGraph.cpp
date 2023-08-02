

class Solution {
  public:
   
   void dfs(int V, vector<int> adj[], vector<int>& visited, vector<int>& ans) {
       
        visited[V] = 1;
        ans.push_back(V);
        
        for(auto node: adj[V]) {
            if(!visited[node]) {
                dfs(node, adj, visited, ans);
            }
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> visited(V,0), ans;
        dfs(0, adj, visited, ans);
        return ans;
    }
};

