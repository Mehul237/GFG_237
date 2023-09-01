
class Solution {
  public:
    int longestKSubstr(string s, int k) {

      int i = 0, j = 0;
      unordered_map<char, int> m;
      int maxi = -1;
      int n = s.size();
      int count = 0;

      while( j < n) {
          
         char ch = s[j];

         if(m[ch]==0) 
           count++;

         while(count > k) {

             m[s[i]]--;

             if(m[s[i]]==0) 
               count--;
             i++;
         }

         m[s[j]]++;
         j++;
         maxi = max(maxi, j-i);
    }

    if(m.size()>=k) 
      return maxi;
    return -1;
  }
};






// ------------------------------------------------------------------------

class Solution{
  public:
    int longestKSubstr(string s, int k) {
        unordered_map<char, int> m;
        int uniq = 0, i = 0, j = 0, res = 0, n = s.length();
    
        while (j < n) {
            // sliding the j-pointer till we have a valid substring
            while (j < n) {
                if (m[s[j]] == 0) uniq++;
                m[s[j]]++;
                // if the number of uniq characters increases k, we stop.
                if (uniq > k) break;
                j++;
            }
    
            // checking if the unique characters are equal to k or k + 1
            if (uniq >= k) res = max(res, j - i);
    
            if (j == n) break;
    
            // sliding the i-pointer till we again get k unique characters in the
            // substring
            while (i < n) {
                if (m[s[i]] == 1) uniq--;
                m[s[i]]--;
    
                if (uniq == k) break;
                i++;
            }
            i++;
            j++;
        }
        if (res == 0) return -1;
            return res;
    }
};
