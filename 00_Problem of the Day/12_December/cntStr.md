
## [String's count](https://www.geeksforgeeks.org/problems/count-of-strings-that-can-be-formed-using-a-b-and-c-under-given-constraints1135/1) 


```cpp

long long int countStr(long long int n) {

    long long ans = 1+(n*2)+(n*((n*n)-1)/2);
    return ans; 
}

```


### Complexity:
-----------------------------------------
> <em> Time Complexity:</em> O(1)
>
>   
> Auxiliary Space: O(1)
>
----------------------------------------- 
