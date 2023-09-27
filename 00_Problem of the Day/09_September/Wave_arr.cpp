
// Expected approach

class Solution {
    public:
    
    void convertToWave(int n, vector<int>& arr) {
        
        for(int i=1; i<n; i+=2) {
          swap(arr[i], arr[i-1]);
        }
    }
};






// Me


class Solution {
    public:
    void convertToWave(int N, vector<int>& arr) {
        
        int length = N;
        
        if(N % 2)
            length -= 1;
            
        for(int i=length-1; i>=0; i-=2) {
            swap(arr[i], arr[i-1]);
        }
        return;
    }
};

