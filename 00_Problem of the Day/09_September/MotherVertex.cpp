
class Solution {
    public:
     
    void DFS(vector<int>adj[],int node, vector<int>&vis  ) {
        
       vis[node] = 1;
       
       for(auto x: adj[node]) {
           if(!vis[x]) {
               DFS(adj, x, vis);
           }
       }
    }
    
	int findMotherVertex(int V, vector<int>adj[]) {
	    
	    int ans = 0;
	    vector<int>vis(V, 0);
	    
	    for(int i=0; i<V; i++) { 
	        if(!vis[i]) {
	          DFS(adj, i, vis);
	          ans = i;
	        }
	    }
	    
	     vector<int>visi(V, 0);
	     DFS(adj, ans, visi);
	     for(auto x:visi) if(x==0)return -1;
	     return ans;
	}
};
