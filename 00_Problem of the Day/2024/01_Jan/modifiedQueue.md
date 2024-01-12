[Reverse First K elements of Queue](https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1)


```cpp

class Solution {
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        
        stack<int>s;
        queue<int>ans;
        
        while(k--){
            s.push(q.front());
            q.pop();
        }
        while(!s.empty()){
            ans.push(s.top());
            s.pop();
        }
        while(!q.empty()){
            ans.push(q.front());
            q.pop();
        }
        return ans;
    }
};

```
