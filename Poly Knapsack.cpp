int solver(int i, vector<int>& w, vector<int>& val, int c, int dp[][251])
{
  if (c <= 0 || i >= w.size())
    return 0;
  if (dp[i][c] != -1)
    return dp[i][c];

  int incl = 0, excl = 0;

  if (c - w[i] >= 0)
    incl = val[i] + solver(i, w, val, c - w[i], dp);

  excl = solver(i + 1, w, val, c, dp);

  return (dp[i][c] = max(incl, excl));
}

int solve(vector<int>& weights, vector<int>& values, int capacity)
{
  int dp[values.size()][251];
  memset(dp, -1, sizeof(dp));
  return solver(0, weights, values, capacity, dp);
}
