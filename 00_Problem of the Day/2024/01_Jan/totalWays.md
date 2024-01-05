

[Count possible ways to construct buildings](https://www.geeksforgeeks.org/problems/count-possible-ways-to-construct-buildings5007/1)


```cpp

class Solution {
	public:

    long long int mod = 1e9+7;
    long long int solve(int index, int N, vector<long long int> &dp) {
        
        if(index >= N) {
            return 1;
        }
        
        long long int fix = 0;
        long long int notfix = 0;
        
        if(dp[index] != -1) {
            return dp[index];
        }
        
        fix = solve(index+2, N, dp) % mod;
        notfix = solve(index+1, N, dp) % mod;
        return dp[index] = (fix + notfix) % mod;
    }
    
    int TotalWays(int N) {
        vector<long long int> dp(N+1, -1);
        long long int x = solve(0, N, dp) % mod;
        return (x * x) % mod;
    }
};

```
