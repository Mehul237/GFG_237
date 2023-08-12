
// Method-01

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int n, int m, string s1, string s2)
    {
        //using dp[][] array to store length of LCS.
        int dp[1001][1001];
        
        //Following steps build dp[x+1][y+1] in bottom up fashion. Note that 
        //dp[i][j] contains length of LCS of s1[0..i-1] and s2[0..j-1].
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                //if i or j is 0, we mark dp[i][j] as 0.
                if(i==0||j==0)
                dp[i][j]=0;     
                
                //else if the current char in both strings are equal, we add 1 
                //to the output we got without including these both characters.
                else if (s1[i-1] == s2[j-1])        
                dp[i][j] = dp[i-1][j-1] + 1; 
                
                //else s1[i-1]!=s2[j-1] so we check the max output which 
                //comes from s1 or s2 without considering current character.
                else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]); 
            }
        }
        
        //returning the result.
        return dp[n][m];   
    }
};









// Method-02

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int n, int m, string s1, string s2)
    {
        vector<vector<int>> ans(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (s1[i] == s2[j])
                    ans[i][j] = (i == 0 || j == 0) ? 1 : 1 + ans[i-1][j-1];
                else 
                {
                    if (i == 0 && j == 0)
                        ans[i][j] = 0;
                    else if (i == 0)
                        ans[i][j] = ans[i][j-1];
                    else if (j == 0)
                        ans[i][j] = ans[i-1][j];
                    else
                        ans[i][j] = max(ans[i-1][j], ans[i][j-1]);
                }
            }
        }
        return ans[n-1][m-1];
    }
};
