int solve(int n) {
  if (n <= 4) {
    return n;
  }
  int dp[n + 1];
  for (int i = 0; i <= 4; i++) {
    dp[i] = i;
  }
  for (int i = 5; i <= n; i++) {
    dp[i] = dp[i - 3] * 3;
  }
  return dp[n];
}
