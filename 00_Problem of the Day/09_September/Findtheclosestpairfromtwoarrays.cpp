
// Me

class Solution {
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {  
        
        int left = 0;
        int right = m-1;
        int ans = INT_MAX;
        int ans1, ans2;
        
        while(right >= 0 && left < n) {
            
            int sum = arr[left] + brr[right];
            
            if(abs(sum-x) < ans) {
                
                ans = abs(sum-x);
                ans1 = arr[left];
                ans2 = brr[right];
            }
            if(sum > x) {
                right--;
            }
            else {
                left++;
            }
        }
        return {ans1, ans2};
    }
};







// GFG

class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        
        swap(n,m);
        
    	// Initialize the diff between pair sum and x.
    	int diff = INT_MAX;
    
    	// res_l and res_r are result indexes from ar1[] and ar2[]
    	// respectively
    	int res_l, res_r;
    
    	// Start from left side of ar1[] and right side of ar2[]
    	int l = 0, r = n-1;
    	while (l<m && r>=0)
    	{
        	// If this pair is closer to x than the previously
        	// found closest, then update res_l, res_r and diff
        	if (abs(arr[l] + brr[r] - x) < diff)
        	{
        		res_l = l;
        		res_r = r;
        		diff = abs(arr[l] + brr[r] - x);
        	}
        
        	// If sum of this pair is more than x, move to smaller
        	// side
        	if (arr[l] + brr[r] > x)
        		r--;
        	else // move to the greater side
        		l++;
    	}
    	while(l<m)
    	{
    	    if (abs(arr[l] + brr[0] - x) < diff)
        	{
        		res_l = l;
        		res_r = 0;
        		diff = abs(arr[l] + brr[0] - x);
        	}
        	l++;
    	}
    	while(r>=0)
    	{
    	    if (abs(arr[m-1] + brr[r] - x) < diff)
        	{
        		res_l = m-1;
        		res_r = r;
        		diff = abs(arr[m-1] + brr[r] - x);
        	}
        	r--;
    	}
        vector<int> v;
        
    	v.push_back(arr[res_l]);
    	v.push_back(brr[res_r]);
    	return v;
    
    }
};
