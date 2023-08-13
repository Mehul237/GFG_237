
// Method-01

class Solution {
  public:
    const int mod = 1e9+7;

    int nthFibonacci(int n) {

        //prestoring
        int dp[n+5];

        //initializing dp[0] as 0
        dp[0]=0;

        //initializing dp[1] as 1
        dp[1]=1;

        for(int i=2;i<=n;i++) {
            //as same as fibonacci formula f(i)=f(i-1)+f(i-2)
            dp[i]=(dp[i-1]%mod + dp[i-2]%mod)%mod;
        }

        //returning nth value
        return dp[n];
    }
};


// Method-02

class Solution {
  public:
    int nthFibonacci(int n) {
 
        vector<int> fbn;
        fbn.push_back(0);
        fbn.push_back(1);
        
        for(int i=2; i<n+1; i++) {
            fbn.push_back((fbn[i-1] + fbn[i-2])%1000000007);
        }
        return fbn[n];
    }
};
