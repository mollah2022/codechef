#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int countOperationStrings(int N) {
    // Initialize a 2D vector to store the count of valid operation strings.
    // dp[i][j] represents the number of valid operation strings of length i ending with operation j.
    vector<vector<long long>> dp(N + 1, vector<long long>(3, 0));

    // Initialize base cases for dp.
    dp[1][0] = 1; // The first operation must be '&'.
    dp[1][1] = 0; // There's no valid operation string of length 1 ending with '|'.
    dp[1][2] = 0; // There's no valid operation string of length 1 ending with '^'.

    // Fill in the dp array using the given conditions.
    for (int i = 2; i <= N; i++) {
        dp[i][0] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2]) % MOD;
        dp[i][1] = dp[i - 1][0];
        dp[i][2] = dp[i - 1][1];
    }

    // The answer is the sum of valid operation strings of length N ending with all three operations.
    long long ans = (dp[N][0] + dp[N][1] + dp[N][2]) % MOD;
    return ans;
}

int main() {
    int t; cin >> t;
    while(t--){
    int N;
    cin >> N;
    int result = countOperationStrings(N);
    cout << result << endl;
}
    return 0;
}