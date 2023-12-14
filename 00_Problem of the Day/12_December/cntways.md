
## [Painting the Fence](https://www.geeksforgeeks.org/problems/painting-the-fence3727/1) 

```cpp
class Solution {
public:
    long long countWays(int n, int k) {
        if (n == 1) return k;
        if (n == 2) return k + k * (k - 1) % 1000000007;

        long long mod = 1000000007;
        long long same = k;
        long long diff = (k%mod * (k - 1) % mod)%mod;
        long long total = (same %mod+ diff%mod) % mod;

        for (long long i=3; i<=n; i++) {
            same = diff % mod;
            diff = (total % mod * (k - 1) % mod) % mod;
            total = (same%mod + diff%mod) % mod;
        }
        return total ;
    }
};
```


<br>

### Complexity:
-----------------------------------------
> <em> Time Complexity:</em> O(2n)
>    - The loop iterates from 3 to n, inclusive.
>    - Inside the loop, there are 3 constant-time operations: assignment, modulus operation, and addition.
>    - Therefore, the time complexity of the loop is O(n).
>    - However, the modulus operation inside the loop is performed twice, leading to an effective complexity of O(2n).
>   
> Auxiliary Space: O(1)
>   - The code uses three variables to store the intermediate values: same, diff, and total.
>   - These variables are all long longs, which typically require 8 bytes of memory each.
>   - Therefore, the space complexity of the code is O(3) = O(1).
----------------------------------------- 
