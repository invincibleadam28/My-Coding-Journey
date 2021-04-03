int solve(vector<int>& t) {
  if (t.size() < 2) {
    return 0;
  }
  int n = (int)t.size();
  vector<int> dp(n);
  int cnt = 1, val;
  val = dp[0] = t[0];
  for (int i = 1; i < (n - 1); ++i) {
    --val;
    dp[i] = max(dp[i - 1] - 1, t[i]);
    if (val <= 0) {
      val = dp[i];
      ++cnt;
    }
  }
  return cnt;
}
