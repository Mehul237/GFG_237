class Solution {
	public:
	void shuffleArray(int arr[], int n) {
	    vector<int>v;
	    int mid = n/2; 
	    for(int i=0; i<n/2; i++) {
	        v.push_back(arr[i]);
	        v.push_back(arr[mid++]);
	    }
	    
	   for(int i=0; i<n; i++)
	        arr[i] = v[i];	        
	}
};
