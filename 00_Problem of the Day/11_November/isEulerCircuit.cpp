class Solution {
public:
	int isEulerCircuit(int V, vector<int>adj[]) {
	    
	    int count = 0;
	    
	    for(int i=0; i<V; i++) {
	        count += adj[i].size() % 2;
	    }
	    
	    if(count == 0) return 2;
	    if(count == 2) return 1;
	    return 0;
	}
};
