class Solution {
    public:
    long countSubarrays(int a[], int n, int L, int R) {

        long pre = 0;
        long preLow = 0;
        long count = 0;
        
        for (int i = 0; i < n; i++) {
            if (a[i] < L) {
                count += pre;
                preLow++;
            } else if (a[i] > R) {
                pre = 0;
                preLow = 0;
            } else {
                count += (pre + preLow + 1);
                pre += preLow + 1;
                preLow = 0;
            }
        }
        return count;
    }
};
