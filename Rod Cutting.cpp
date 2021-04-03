int solver(int i, vector<int> &p, int n, int dp[])
{
  if (i > p.size() || n <= 0) return 0;
  if (dp[n] != -1) return dp[n];

  int take = 0, leave = 0;

  if (n - i >= 0)
    take = p[i - 1] + solver(i, p, n - i, dp);

  leave = solver(i + 1, p, n, dp);

  return (dp[n] = max(take, leave));
}

int solve(vector<int>& prices, int n)
{
  if (n == 1)
    return prices[0];
  int dp[n + 1];
  memset(dp, -1, sizeof(dp));
  solver(1, prices, n, dp);

  return dp[n];


}
