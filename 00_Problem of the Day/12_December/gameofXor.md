
## [Game of XOR](https://www.geeksforgeeks.org/problems/game-of-xor1541/1) 

### Aproach
 - The approach here works actually due to associative property of xor
 - Basically taking xor of xor of each subarray is actually equivalent to taking xor of an element the number of times it appears in a subarray
 - So basically for each element, you need to count, how many subarrays it is a part of, It is just equal to product of number of element to its left and right
 - Now in order to save from taking product, we need to just check if either of them is even i.e left or right
 - This comes from the fact that xor even times is 0, so it means that, that number will not contribute in the final answer
 - Else we just take xor of this number with our current answer. The final answer is what we get after all iterations end

```cpp

class Solution {
  public:
    int gameOfXor(int N , int A[]) {
        
        int ans=0;
        
        for(int i=0; i<N; i++) {
            
            int left = i + 1, right = N - i;
            
            if(left % 2 == 0 || right % 2 == 0) {
                continue;
            }
            ans ^= A[i];
        }
        return ans;
    }
};

```


### Complexity:
-----------------------------------------
> <em> Time Complexity:</em> O(N)
> 
> Auxiliary Space: O(1)
>  
----------------------------------------- 
