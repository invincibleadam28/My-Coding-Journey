bool is_pal(string &s, int i, int j) {
  while (i <= j) {
    if (s[i++] != s[j--]) {
      return false;
    }
  }
  return true;
}
int helper(string &s, int i, vector<int> &dp) {
  if (i == s.length()) return 1;
  if (dp[i] != -1) return dp[i];
  int ans = 0;
  for (int j = i; j < s.length(); j++) {
    if (is_pal(s, i, j)) {
      ans += helper(s, j + 1, dp);
    }
  }
  return dp[i] = ans;
}
int solve(string s) {
  vector<int> dp(s.length(), -1);
  return helper(s, 0, dp);
}
