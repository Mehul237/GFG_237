

class Solution {
    public:
    
    long long mod = 1e9+7;
    
    long long power(int N, int R) {
       if(R==1)
         return N;
       long long res = power(N, R/2);
         res = (res * res) % mod;
       if(R % 2 != 0)
       return (N * res) % mod;
       else
       return (res % mod);
    }
};

