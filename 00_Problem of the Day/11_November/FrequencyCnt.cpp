class Solution {
    public:

    void frequencyCount(vector<int>& arr,int N, int P) {
        
        int mod = 1 + max(N, P);
        for(int idx : arr)
            if(idx % mod - 1 < N) 
                arr[idx % mod - 1] += mod;
        for(int &i : arr)
            i /= mod;
    }
};
