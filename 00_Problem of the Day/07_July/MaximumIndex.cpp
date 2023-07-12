
class Solution {
public:

    int maxIndexDiff(int arr[], int n) {
        
        vector<int> minLeft(n, 0);
        vector<int> maxRight(n, 0);
        int ans = 0;
        minLeft[0] = arr[0];
        maxRight[n-1] = arr[n-1];
        
        for(int i=1; i<n; i++) {
            minLeft[i] = min(minLeft[i-1], arr[i]);
        }
        
        for(int i=n-2; i>=0; i--) {
            maxRight[i] = max(maxRight[i+1], arr[i]);
        }
        
        int i=0, j=0;
        
        while(i<n && j<n) {
            if(minLeft[i] <= maxRight[j]) {
                ans = max(ans, j-i);
                j++;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};
