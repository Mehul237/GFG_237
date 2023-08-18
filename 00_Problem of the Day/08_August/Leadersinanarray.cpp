

class Solution {
    public:
    vector<int> leaders(int a[], int N) {
   
       vector <int> ans;
       long long maxNumber = a[N-1];
       
       // Right to left element stored, Last element to First element
       for(int i=N-1; i>=0; i--) {
           
            //Comparing the current element with the maximum element stored. 
            //If current element is greater than max, we add the element.
           if( a[i] >= maxNumber) {
               
               // Updating the maximum element.
               maxNumber = a[i];
              //Storing the current element in vector for leaders.
               ans.push_back(a[i]);
           }
       }
       
       // right to left element sorted, 2 5 17
       
       // Left to right is answer, So that we need to do it reverse operation
       reverse(ans.begin(), ans.end());
       return ans;
    }
};



/*

--------------------------------------------------------------------------------
Complexity:                                                                    +
Time Complexity: O(N), For traversal and reversal of array, takes O(N) time.   +
Auxiliary Space: O(N), For storing the answer.                                 +
--------------------------------------------------------------------------------

*/
