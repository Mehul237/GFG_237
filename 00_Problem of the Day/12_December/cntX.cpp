/*
-------------------------------------------------------------------------------------------------------------------------
Approach:

Based on the question requirement, we need to count the occurrence of x from L to R. 
The trivial approach is to count the x among each element that belongs to (L,R). 
So let's look at the implementation part.

 

Implementation:

For each element, I used a for loop, wherein I called a function check to get the count of x for that particular number. 
Likewise, it works for all the rest of the elements. In order to understand the check function, 
I want to get each digit of the element and compare it with the x or key to see if it is a true increment count by 1.


Complexity:

  - Time: O(N.LogN(base 10)).

      Since, for each element, it takes O(logN, base 10). So, for n elements, it will be O(N.logN).

  - Space: O(1)

-------------------------------------------------------------------------------------------------------------------------
*/


class Solution {
  public:

    void check(int n, int key, int &count) {
        while(n > 0) {
            int rem = n%10;
            n = n/10;
            if(rem == key) {
                count++;
            }
        }
    }
    
    int countX(int L, int R, int X) {
        
        int count = 0;
        
        for(int i=L+1; i<R; i++) {
            check(i, X, count);
        }
        return count;
    }
};
