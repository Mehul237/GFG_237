
class Solution {
  public:
    int isPerfectNumber(long long N) {

        if(N == 1) return 0;
        long sum = 1;
        
        for(long i=2; i*i<N; i++) {
            
            if(N%i == 0) sum += i + N/i;
        }
        return sum == N ? 1 : 0;
    }
};
