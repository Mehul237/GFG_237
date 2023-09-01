
class Solution {
public:	
	int isPalindrome(string s) {
	    
	    int low = 0; 
	    int high = s.size()-1;
	    
	    while(low < high) {
	        if(s[low++] != s[high--]) 
	          return 0;
	    }
	    return 1;
	}
};


/*
-----------------------------------------------
class Solution {
public:	
	int isPalindrome(string s)
	{
	    int n = s.size();
	    
	    for(int i=0; i< n/2; i++) { 
            if(s[i] != s[n-i-1]) {
                return 0;
	        }
	    }
	    return 1;
	}
};
------------------------------------------------
*/
