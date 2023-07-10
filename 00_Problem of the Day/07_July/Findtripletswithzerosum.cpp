
// Q-link -> https://practice.geeksforgeeks.org/problems/find-triplets-with-zero-sum/1 

class Solution {
  public:

    bool findTriplets(int arr[], int n) { 
        
        sort(arr, arr+n);
        
        for(int i=0; i<n-2; i++) {
            
            int l=i+1, r=n-1;
            
            while(l<r) {
                
                if(arr[l]+arr[r]+arr[i]==0) 
                    return 1;
                else if(arr[l]+arr[r]+arr[i] > 0) 
                    r--;
                else if(arr[l]+arr[r]+arr[i] < 0) 
                    l++;
            }
        }
        return 0;
    }
};
