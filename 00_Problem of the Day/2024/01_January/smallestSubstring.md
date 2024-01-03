

[Smallest window containing 0, 1 and 2](https://www.geeksforgeeks.org/problems/smallest-window-containing-0-1-and-2--170637/1)

```cpp

class Solution {
  public:
    int smallestSubstring(string S) {
        
        int n = S.size();
        int zero = -1, one = -1, two = -1, ans = INT_MAX;
        
        for(int i=0; i<n; i++) {
            
            if(S[i] == '0') {
                zero = i;
            }
            
            if(S[i] == '1') {
                one = i;
            }
            
            if(S[i] == '2') {
                two = i;
            }
            
            if(zero != -1 && one != -1 && two != -1) {
                ans = min(ans, max({zero, one, two}) - min({zero, one, two}) + 1);
            }
        }
        
        if (ans == INT_MAX) return -1;
        return ans;
    }
};

```
