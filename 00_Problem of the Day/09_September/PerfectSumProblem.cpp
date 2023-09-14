


class Solution {
    
    // Initialize mod value for calculations
    int mod = (int)(1e9 + 7);
    
    // 2D vector to store dynamic programming values
    vector<vector<int>> dp; 
    
    // Size of the array
    int N; 


    int fun(int pos, int sum, int arr[]) {
        if (pos >= N)
        
            // Check if sum is zero when array position reaches end
            return sum == 0; 

        // Reference to store calculated value in dp vector
        int &ans = dp[pos][sum]; 
        if (ans != -1)
        
            // Return the already calculated value from dp vector
            return ans; 

        // Initialize answer with zero
        ans = 0; 

        // Recursively call function for next position with sum unchanged
        ans += fun(pos + 1, sum, arr); 
        
        // Take modulo of the answer to avoid overflow
        ans %= mod; 
        if (arr[pos] <= sum)
        
            // Recursively call function for next position with reduced sum
            ans += fun(pos + 1, sum - arr[pos], arr), ans %= mod; 

         // Return the calculated answer
        return ans;
    }

    public:
    int perfectSum(int arr[], int n, int sum) {
        
        // Initialize dp vector with -1
        dp.assign(n + 1, vector<int> (sum + 2, -1)); 
        
        // Assign n to N variable
        N = n; 
        
        // Call recursive function with initial parameters
        return fun(0, sum, arr); 
    }
};
