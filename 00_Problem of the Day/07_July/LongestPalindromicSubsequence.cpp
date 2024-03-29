class Solution {
  public:
    int longestPalinSubseq (string A) {
      
        int n = A.length ();
        string B = A;
        reverse (B.begin(), B.end());
        
        // a palindrome reads the same from front and reverse.
        // hence, the longest palindromic subsequence is
        // basically the longest common subsequence in
        // A and reverse(A)
      
        int dp[n + 1][n + 1];
        for (int i=0; i<=n; ++i) {
            for (int j=0; j<=n; ++j) {
                if (i == 0 || j == 0) dp[i][j] = 0;
                else
                {
                    if (A[i - 1] == B[j - 1])
                        dp[i][j] = 1 + dp[i - 1][j - 1];
                    else
                        dp[i][j] = max (dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[n][n];
    }
};
