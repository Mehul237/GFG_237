
class Solution {
    public:
    string reverseWord(string str) {
        
        // Method-1 (Brute force approach): In-built reverse fn
 
        reverse(str.begin(), str.end());
        return str;



      // Method-2 (Better approach): Create new string and insert from last element
      
        string rev = "";
        
        //iterating over the characters of the string in reverse.
        for(int i = str.size()-1; i>=0; i--) {
            
            //appending the current character to the reversed string.
            rev += str[i];
        }
        
        //returning the reversed string.
        return rev;




      
       // Method-3 (Optimal approach): Two pointer

       int low = 0;
       int high = str.size()-1;
       
       while(low <= high) {
           swap(str[low++], str[high--]);
       }
       return str;

      
      
       int low = 0;
       int high = str.size()-1;
       
       while(low <= high) {

         // Swap function implement
           char temp = str[low];
           str[low] = str[high];
           str[high] = temp;
           
           low++;
           high--;
       }
       return str;   
    }
};
