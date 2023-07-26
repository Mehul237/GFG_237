
class Solution {
	public:
		string FirstNonRepeating(string A) {
		    
		    string ans = ""; // return string
		    ans += A[0]; // the first character
		    
		    queue<char>q;
		    q.push(A[0]); // push first character into queue
		   
		    int arr[26] = {0}; // to count the freuency of each character
		    arr[A[0]-'a']++; // the first character
		    
		    for(int i=1; i<A.size(); i++) {
		        
		        arr[A[i]-'a']++; // frequency of ith character
		        
		        
		        // if A[i] has occurred for the first time
		        // push into queue
		        if(arr[A[i]-'a'] == 1) q.push(A[i]);
		        
		        // now find in queue ( because we will be able to check from the back, thats why queue is used)
		        // which character has occurred only once
		       while(!q.empty() and arr[q.front()-'a'] != 1) {
		            q.pop();
		       }
		            
		      // if queue got empty
		      // then no character has a frequency = 1 before the ith index

		      if(q.empty())
		        ans += '#';
		      else
		        ans += q.front();
		    }
		    return ans;
	}
};
