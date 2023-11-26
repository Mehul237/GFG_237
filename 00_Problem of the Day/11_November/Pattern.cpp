class Solution {
public:
    vector<int> pattern(int N) {
        int temp = N;
        vector <int> ans;
        
        while(temp > 0) {
            ans.push_back(temp);
            temp = temp - 5;
        }
        
        while(temp <= N) {
            ans.push_back(temp);
            temp = temp + 5;
        }
        return ans;
    }
};
