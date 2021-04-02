int solve(string a, string b) {
  int n = a.length();
  int m = b.length();

  if (n == 0 || m == 0) return 0;
  int dp[n + 1][m + 1];
  int ans = 0;
  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= m; j++)
    {
      if (i == 0 || j == 0)
      {
        dp[i][j] = 0;
        continue;
      }
      if (a[i - 1] == b[j - 1])
        dp[i][j] = dp[i - 1][j - 1] + 1;
      else
        dp[i][j] = 0;

      ans = max(dp[i][j], ans);
    }

  }

  return ans;

}
