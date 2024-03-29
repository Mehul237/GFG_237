// Tabulation

class Solution {
public:
    int knapSack(int N, int W, int val[], int wt[]) {
        
        vector<int> dp(W+1,0);
        
        for(int i=0; i<N; i++) {
            
            for(int j=0; j<=W; j++) {
                
                if(j - wt[i] >= 0)
                dp[j] = max(dp[j], dp[j - wt[i]] + val[i]);
            }
        }
        return dp[W];
    }
};
