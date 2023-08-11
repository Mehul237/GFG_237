
class Solution {
  public:
    long long int count(int coins[], int N, int sum) {

        vector<vector<long long int>> dp(N, vector<long long int>(sum + 1, 0));
        vector<long long int> prev(sum + 1, 0), cur(sum + 1, 0);

        for (long long int t = 0; t <= sum; t++) {
            prev[t] = (t % coins[0] == 0);
        }

        for (long long int ind = 1; ind < N; ind++) {
            for (long long int t = 0; t <= sum; t++) {
                long long int notTake = prev[t];
                long long int take = 0;
                if (coins[ind] <= t) {
                    take = cur[t - coins[ind]];
                }

                cur[t] = take + notTake;
            }

            prev = cur;
        }
        return prev[sum];
    }
};

