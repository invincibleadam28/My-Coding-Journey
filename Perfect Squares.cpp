int solve(int n)
{
  int dp[n + 1] = {0};
  dp[0] = 0;
  dp[1] = 1;

  for (int i = 0; i <= n; i++)
  {
    for (int j = 1; (i + (j * j)) <= n; j++)
    { if (dp[i + (j * j)] == 0)
        dp[i + (j * j)] = 1 + dp[i];
      else
        dp[i + (j * j)] = min(1 + dp[i], dp[i + (j * j)]);
    }
  }
  return dp[n];

}