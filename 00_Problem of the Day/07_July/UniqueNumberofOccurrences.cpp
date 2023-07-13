class Solution {
    public:
    
    bool isFrequencyUnique(int n, int arr[]) {
        
        unordered_map<int, int>mp;
        
        for(int i=0; i<n; i++)
           mp[arr[i]]++;
        unordered_set<int>st;
        
        for(auto i:mp) {
            if(st.find(i.second)!=st.end())return 0;
            st.insert(i.second);
        }
        return 1;
    }
};
