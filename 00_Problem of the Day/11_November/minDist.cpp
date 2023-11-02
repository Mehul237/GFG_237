class Solution {
  public:
   int minDist(int a[], int n, int x, int y) {
       
      int xi = -1;
      int yi = -1;
      int ans = INT_MAX;
      
      for (int i = 0; i < n; i++) {
         if (a[i] == x) xi = i;
         if (a[i] == y) yi = i;
         if (xi != -1 && yi != -1) {
            ans = min(ans, abs(xi - yi));
        }
    }
    return ans == INT_MAX ? -1 : ans;
  }
};
