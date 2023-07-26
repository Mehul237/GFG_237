
class Solution
{
    public:

    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        stack <int> s2;
        int cnt = ((sizeOfStack)/2);
        int x = 0;
        
        while(!s.empty()) {
           int cur = s.top();
           s.pop();
           if(x != cnt)
             s2.push(cur);
             x++;
        }
        
        while(!s2.empty()){
           s.push(s2.top());
           s2.pop();
        }
    }
};
