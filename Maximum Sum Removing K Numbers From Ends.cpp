int solve(vector<int>& nums, int k) {
  int sum = accumulate(nums.begin(), nums.end(), 0);
  int n = nums.size();
  k = n - k;
  int cur = 0;
  for (int i = 0; i < k; ++i) {
    cur += nums[i];
  }
  int ans = cur;
  for (int i = k; i < n; ++i) {
    cur -= nums[i - k];
    cur += nums[i];
    ans = min(ans, cur);
  }
  return sum - ans;
}