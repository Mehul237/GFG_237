
class Solution {
    public:
    
   int setSetBit(int X, int Y, int L, int R) {
   
      for (int i = L; i <= R; i++) {
        
          // Check if the ith bit of Y is set (1)
          if ((Y >> (i-1)) & 1) {
    
              // Set the ith bit of X to 1
              X |= (1 << (i-1));
            }
        }
        return X;
    } 
};
