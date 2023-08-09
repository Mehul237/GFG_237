

class Solution {
public: 
    long long int largestPrimeFactor(int N)
    {
        long long num = 2;
        while ((num * num) <=N)
        
        // if num divides N evenly
        if (N % num == 0) 
        
         // divide N by num
            N /= num; 
        else
        
        // increase num if it don't divide N
            num++; 
        return N;
    }
};

