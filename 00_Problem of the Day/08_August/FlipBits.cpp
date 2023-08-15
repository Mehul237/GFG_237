
// Kadane Algorithm

/*
The function initializes three variables:

 - maxOnesCount: This will store the maximum count of ones after flipping a subarray.
 - currentZeros: This keeps track of the current count of consecutive zeros encountered.
 - onesCount: This counts the total number of ones in the original array.

|- Inside the loop:

 -> If the current element a[i] is 0, it means we encountered a zero. So, we increment currentZeros.
 
 -> If the current element a[i] is 1, it means we encountered a one. So, we decrement currentZeros (because flipping this one would make it a zero), and we increment onesCount (since it's a one).

 -> The line maxOnesCount = max(maxOnesCount, currentZeros) updates maxOnesCount with the larger value between its current value and currentZeros. This helps us keep track of the maximum number of ones we can achieve after flipping.


|- The next conditional block checks if currentZeros has gone negative. If it has, it means that the consecutive zeros were flipped to ones, but the total ones are more than the zeros flipped. In such cases, we reset currentZeros to 0.

 - After processing all elements, we return the sum of onesCount (original ones) and maxOnesCount (maximum ones we can achieve by flipping).

 -- The code works by keeping track of the counts of ones and zeros while iterating through the array. It determines the maximum number of ones we can have after flipping a subarray of zeros. The sum of the original ones and the maximum ones after flipping gives the total ones we can achieve

*/




class Solution {
public:
    int maxOnes(int a[], int n) {
        
         // Maximum count of ones after flips
        int maxOnesCount = 0; 
        // Current count of consecutive zeros
        int currentZeros = 0;  
        // Total count of ones in the original array
        int onesCount = 0;     

        for (int i=0; i<n; i++) {
            
            if (!a[i]) {
                currentZeros++;
            }
            else { 
                currentZeros--;
                onesCount++;
            }

            maxOnesCount = max(maxOnesCount, currentZeros);

            if (currentZeros < 0) {
                 // Reset current count if it goes negative
                currentZeros = 0; 
            }
        }
        
        // Total ones after flipping = original ones + max ones after flips
        return onesCount + maxOnesCount; 
    }
};
