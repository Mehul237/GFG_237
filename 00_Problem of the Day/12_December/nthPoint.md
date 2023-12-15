
## [Reach the Nth point](https://www.geeksforgeeks.org/problems/reach-the-nth-point5433/1) 


### 01 - Brute force approach: Using recursion

```cpp
class Solution {
    private:
    int fib(int n) {
        if (n <= 1) {
            return n;
        }
        return fib(n - 1) + fib(n - 2);
    }

    public:
    int nthPoint(int n) {
        return fib(n + 1);
    }
};
```

<br>

### Complexity:
-----------------------------------------
> <em> Time Complexity:</em> O(2^n)
>    -  because at each stair there are two choices and there are total of n stairs
> 
>   
> Auxiliary Space: O(n)
>   - because of recursive stack space
>   
----------------------------------------- 


<br>

### 02 - Better appraoch: Using DP

```cpp
class Solution {
	public:
		int nthPoint(int n) {

		  int mod = 1000000007;
		  int dp[n+1]={0};
		  dp[0] = 1; 
		  dp[1] = 1; // ways to reach at 1st stair
		  dp[2] = 2; // ways to reach at 2nd stair

		for(int i = 3; i <= n; i++) {
		   // Adding the answers from previous two stairs
		   dp[i] = (dp[i-1] % mod + dp[i-2] % mod) % mod;
		}
		return dp[n];
	}
};
```
<br>

### Complexity:
-----------------------------------------
> <em> Time Complexity:</em> O(n)
>    - The loop iterates n times, and each iteration takes constant time
> 
>   
> Auxiliary Space: O(n)
>   - The dp array of size n + 1 is used to store intermediate results
>   
----------------------------------------- 


<br>


## 03 - Optimized approach

```cpp
class Solution {
	public:
	
	int nthPoint(int n) {

		int curr = 2, prev = 1, mod = 1000000007;
            
        for(int i=2; i<=n; i++){
            int temp = (curr+prev)%mod;
            prev = curr;
            curr = temp;
        }
        return prev;
	}
};
```

<br>

### Complexity:
-----------------------------------------
> <em> Time Complexity:</em> O(2n)
>    - since the loop iterates through each point from 2 to n, performing constant-time operations.
>
>   
> Auxiliary Space: O(1)
>    - since the space used is constant as only a few variables (curr, prev, mod, temp, and the loop variable i) are used.
>    - The space doesn't depend on the input size n.
----------------------------------------- 
