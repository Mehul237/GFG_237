class Solution {
public:
    void pushZerosToEnd(int arr[], int n) {

      int i = 0, j = 0;
     
      while (i < n) {
        if (arr[i] != 0) {
            if (i != j) {
                swap(arr[i],arr[j]);
            }
            j++;
        }
        i++;
      }
    }
};
