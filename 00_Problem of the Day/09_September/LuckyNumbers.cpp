
// Optimal

bool check(int n,int counter)
{
    if(counter<=n) {
        if(n%counter==0)
            return false;
      
        //calculate next position of input no 
        n = n-n/counter;
        counter++;
      
        //make recursive call with updated counter 
        //and position return check(n, counter);
        return check(n, counter);
    }
    else
        return true;
}
bool isLucky(int n) {
    return check(n, 2);
}






// Method - 02

class Solution {
public:
    bool isLucky(int n) {
        
        int cnt = 2;
        
        while(cnt <= n) {
            
            if(n % cnt == 0) 
               return 0;
            int rem = n / cnt;
            n -= rem;
            cnt++;
        }
        return 1;
    }
};
