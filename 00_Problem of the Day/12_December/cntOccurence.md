
## [Count More than n/k Occurences](https://www.geeksforgeeks.org/problems/count-element-occurences/1) 

### Intuition:
  - We can keep the track of frequency of elements with the help of unordered_map and can store the frequency of elements in O(N) time.
  
### Implementation:
  - Create an unordered_map with key storing the element and value storing the frequency of element.
  - Run a loop over the array 
  - increase the frequency of the element every time it comes
  - finally iterate the map and check for each element whether its count is greater than n/k then increase the counter and finally return it

-------------------------------------------------

```cpp
class Solution {
    public:
    
    int countOccurence(int arr[], int n, int k) {
        int cnt = 0;
        unordered_map<int, int> mp;
        int cmp = n/k;
        
        for(int i=0; i<n; i++) {
            mp[arr[i]]++;
        }
        
        for(auto traverseMp : mp) {
            if(traverseMp.second > cmp)
                cnt++;
        }
        return cnt;
    }
};

```


### Complexity:
-----------------------------------------
> <em> Time Complexity:</em> O(N)
>  - N is the number of elements as we are iterating single time and storing in map
> 
> Auxiliary Space: O(N)
>  -  N is the number of elements as we are creating an unordered_map 
>  
----------------------------------------- 
