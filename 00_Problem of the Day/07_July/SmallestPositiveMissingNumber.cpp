/*
-------------------------------------------------------------------------------------------------------------------------------
Q-link -> https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1

Intuition -> Overall, the code uses a map to count the frequency of each element in the array and then checks,  
            for the smallest missing positive number by iterating through the possible values.

Time Complexity: 0(N)

Constructing the frequency map mp takes O(n) time, where n is the size of the input array.
The second loop iterates from 1 to n, performing a constant-time operation (finding the element in the map) for each iteration. 
Therefore, this loop takes O(n) time as well.

Overall, the time complexity of the code is O(n), where n is the size of the input array.

Space Complexity: 0(N)

The map mp stores the frequency of each element in the array. In the worst case, where all elements in the array are unique, 
The map will store n key-value pairs. Therefore, the space complexity of the map is O(n).
Overall, the space complexity of the code is O(n), where n is the size of the input array.

---------------------------------------------------------------------------------------------------------------------------------

*/


class Solution {
    public:
    
    //Function to find the smallest positive number missing from the array.
    
    // The function missingNumber takes an integer array arr and its size n as input and returns an integer.
    int missingNumber(int arr[], int n) {
        
        // It creates a map<int, int> named mp to store the frequency of each element in the array. Maps in C++ are associative containers that store elements in a key-value pair, where each key is unique.
        map<int, int>mp;
        
        // It then loops through the array arr and increments the frequency of each element in the mp map.
        for(int i=0; i<n; i++)
            mp[arr[i]]++;
        
        // Next, it iterates from 1 to n (inclusive) using the variable i.
        // For each value of i, it checks if i exists in the mp map using the find function. If i is not found (i.e., it's not present in the array), it means i is the smallest positive number missing from the array. In that case, the function returns i.
        for(int i=1; i<=n; i++) {
            if(mp.find(i)==mp.end())
              return i;
        }
        
        // If all the numbers from 1 to n exist in the array, the function returns n+1 as the smallest missing positive number.
        return n+1;
    } 
};

