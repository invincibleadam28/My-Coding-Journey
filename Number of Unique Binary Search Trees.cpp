#define m 1000000007

int solve(int n) {
  long long dp[n + 1] = {0};
  dp[0] = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < i; j++) {
      dp[i] = (dp[i] + ((dp[j] * dp[i - j - 1]) % m)) % m;
    }
  }
  return dp[n];
}