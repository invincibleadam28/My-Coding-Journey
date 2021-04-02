const int MOD = 1e9 + 7;

int solve(int n, int faces, int total) {
  vector<int> dp(total + 1);
  for (int i = 1; i <= min(faces, total); ++i) dp[i] = 1;
  vector<int> pre(total + 1);
  for (int turn = 2; turn <= n; ++turn) {
    for (int i = 1; i <= total; ++i) pre[i] = (pre[i - 1] + dp[i]) % MOD;
    for (int i = 1; i <= total; ++i) {
      int l = max(0, i - faces - 1);
      dp[i] = (pre[i - 1] - pre[l] + MOD) % MOD;
    }
  }
  return dp[total];
}
