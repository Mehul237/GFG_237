
class Solution {
  public:
    int romanToDecimal(string &str) {
        
        unordered_map<char,int> mp = {{'I',1}, {'V',5}, {'X',10}, {'L',50}, {'C',100}, {'D',500}, {'M',1000}};
        int res = mp[str[0]];
        
        for(int i=1; i<str.length(); i++) {
            
            if(mp[str[i-1]] < mp[str[i]])
            {
                res -= 2 * mp[str[i-1]];
            }

            res += mp[str[i]];
        }
        return res;
    }
};
