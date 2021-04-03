int solve(vector<int>& nums) {
  int n = nums.size();
  long long dp[n + 1];
  memset(dp, 0, n + 1);
  if (n == 1)
    return nums[0];
  else if (n == 2)
    return min(nums[0], nums[1]);
  else if (n == 3)
    return min(nums[0], min(nums[1], nums[2]));

  else {
    dp[0] = nums[0];
    dp[1] = nums[1];
    dp[2] = nums[2];
    for (int i = 3; i < n; i++) {
      dp[i] = nums[i] + min(dp[i - 1], min(dp[i - 2], dp[i - 3]));
    }
  }
  int a = min(dp[n - 3], min(dp[n - 1], dp[n - 2]));
  return 1ll * a;
}