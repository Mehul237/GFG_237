## [Smith Number](https://www.geeksforgeeks.org/problems/smith-number4132/1) 

### Problem Statement

Given a number n, the task is to find out whether this number is a Smith number or not. 
A Smith number is a composite number whose sum of digits is equal to the sum of digits of its prime factors.

--------------------------
### Example,
<b> Input: </b>
n = 4    <br>
<b> Output: </b>
1        <br>
<b> Explanation: </b>
The sum of the digits of 4 is 4, and the sum of the digits of its prime factors is 2 + 2 = 4.

------------------------------

```cpp
class Solution {
  public:
    
    bool prime(int n) {
        for(int i=2; i<n; i++){ 
            if(n%i == 0)
                return false;
        }
        return true;
    }
  
    int smithNum(int n) {
        
        if(n == 1 || prime(n)) return false;
    
        int ans = 0;
        int i = 2;
        int num = n;
        
        while(num > 1) {
            if(prime(i)) {
                while(num%i == 0 && num > 1) {
                    
                    num = num / i;
                    int val = i;
                    
                    while(val > 0) {
                        
                        int digit = val % 10;
                        ans += digit;
                        val = val / 10;
                    }
                }
            }
            i++;
        }
        
        int res = 0;
        
        while(n > 0) {
            
            int digit = n % 10;
            res += digit;
            n = n / 10;
            
        }
        
        if(ans == res) {
            return true;
        }
        return false;
    }
};

```

<br>


### Complexity:
-----------------------------------------
> <em> Time Complexity:</em> O(n log n)
>   
> Auxiliary Space: O(n)
>
----------------------------------------- 
