
[Search Pattern (KMP-Algorithm)](https://www.geeksforgeeks.org/problems/search-pattern0205/1)

```cpp

class Solution {
    public:

    vector <int> search(string pat, string txt) {
        vector<int>ans;
        size_t pos = txt.find(pat);
        
        while(pos != string::npos) {
            ans.push_back(pos+1);
            pos = txt.find(pat,pos+1);
        }
        
        if(ans.empty()) {
            ans.push_back(-1);
        }
           return ans;
    }
};

```
