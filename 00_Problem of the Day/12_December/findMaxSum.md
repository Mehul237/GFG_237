
## [Max Sum without Adjacents](https://www.geeksforgeeks.org/problems/max-sum-without-adjacents2430/1) 


```cpp

class Solution {
public:	

    int findMaxSum(int *arr, int n) {
        int dp[n + 1];
        dp[0] = arr[0];
        dp[1] = max(arr[0], arr[1]);
        dp[2] = max(dp[0] + arr[2], dp[1]);
    
        for (int i=3; i<n; i++) {
            dp[i] = max(dp[i - 2] + arr[i], dp[i - 1]);
        }
        return dp[n - 1];
    }
};

```


### Complexity:
-----------------------------------------
> <em> Time Complexity:</em> O(N)
>
>   
> Auxiliary Space: O(N)
>  - array dp, which has a size of n + 1. Therefore, the space complexity is O(n) as it depends linearly on the input size.
----------------------------------------- 
