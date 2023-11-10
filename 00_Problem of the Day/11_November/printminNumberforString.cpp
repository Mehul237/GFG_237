class Solution{   
public:
    string printMinNumberForPattern(string s) {
        
        stack<int> st;
        string ans = "";
        
        for(int i=0; i<=s.size(); i++) {
            st.push(i+1);
            if(s[i] == 'I' || i == s.size()) {
                while(!st.empty()) {
                    ans += to_string(st.top());
                    st.pop();
                }
            }
        }
        return ans;
    }
};
