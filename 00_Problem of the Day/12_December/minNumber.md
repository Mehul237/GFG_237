## [Transform to prime](https://www.geeksforgeeks.org/problems/transform-to-prime4635/1) 
------------------------------

```cpp
class Solution {
    public:
     
    bool prime(int n) {
            
        for(int i=2; i<=sqrt(n); i++) {
            if(n % i == 0)return 0;
        }
        return 1;
    }
    
    int minNumber(int arr[], int N) {
        
        int total = 0;
        
        for(int i=0; i<N; i++) {
            total += arr[i];
        }
        
        int ans = 0;
        
        while(1) {
            if(prime(total + ans)) return ans;
            ans++;
        }
    }
};

```


<br>

### Complexity:
-----------------------------------------
> <em> Time Complexity:</em>  O(N + sqrt(N))
>> - As we run a loop of size N and then we run another loop in which we increment total and
>> - check if its prime or not and than loop runs for a constant time as the difference between
>> - the two prime numbers is constant and complexity of is Prime function is O(sqrt(N))
>   
> Space Complexity: O(1)
>> - As we are not using any extra space
>
----------------------------------------- 
