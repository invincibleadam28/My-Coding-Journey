#define ll long long

ll findMax(vector<vector<int>>& stacks, int n, int k, ll** dp) {
  if (k == 0) {
    return 0;
  }
  if (n == 0) {
    return INT_MIN;
  }
  if (dp[n][k] != INT_MIN) {
    return dp[n][k];
  }
  int s = stacks[n - 1].size();
  ll op1 = INT_MIN;
  for (int i = 0; i < stacks[n - 1].size(); i++) {
    if (s - i <= k) {
      ll ans = stacks[n - 1][i] + findMax(stacks, n - 1, k - (s - i), dp);
      op1 = max(op1, ans);
    }
  }
  ll op2 = findMax(stacks, n - 1, k, dp);
  return dp[n][k] = max(op1, op2);
}

int solve(vector<vector<int>>& stacks, int k) {
  int n = stacks.size();
  if (n == 0) {
    return 0;
  }
  for (int i = 0; i < stacks.size(); i++) {
    vector<int>& v = stacks[i];
    for (int j = v.size() - 2; j >= 0; j--) {
      v[j] += v[j + 1];
    }
  }

  ll** dp = new ll*[n + 1];
  for (int i = 0; i <= n; i++) {
    dp[i] = new ll[k + 1];
  }
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= k; j++) {
      dp[i][j] = INT_MIN;
    }
  }
  return (int)findMax(stacks, n, k, dp);
}
