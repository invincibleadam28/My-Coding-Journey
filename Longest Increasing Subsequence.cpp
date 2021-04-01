int solve(vector<int>& nums) {
  int n = nums.size();
  if (n <= 1) return n;
  int dp[n];
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    dp[i] = 1;
    for (int j = 0; j < i; j++)
    {
      if (nums[i] > nums[j])
        dp[i] = max(dp[j] + 1, dp[i]);
    }
    ans = max(ans, dp[i]);
  }
  return ans;
}