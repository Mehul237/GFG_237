class Solution {
    public:
    int isRepresentingBST(int arr[], int n) {
        
        int maxi = arr[0];
        
        for(int i=1; i<n; i++) {
            if(arr[i] <= maxi)
               return 0;
            maxi = arr[i];
        }
        return 1;
    }
};
