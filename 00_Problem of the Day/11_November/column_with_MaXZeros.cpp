class Solution {
    public:
    int columnWithMaxZeros(vector<vector<int>>arr, int N) {
        
        pair<int, int> ans = make_pair(-1, 0);
        
        for(int i=0; i<N; i++) {
            int count = 0;
            for(int j=0; j<N; j++) {
                if(arr[j][i] == 0) {
                    count++;
                }
            }
            if(count > ans.second) {
                ans.first = i;
                ans.second = count;
            }
        }
        return ans.first;
    }
};
