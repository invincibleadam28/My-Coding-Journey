int solve(vector<int>& nums) {
  int ans = INT_MIN, min_val = 1, max_val = 1;
  int n = nums.size();

  for (int i = 0; i < n; i++) {
    if (nums[i] < 0) swap(max_val, min_val);
    max_val = max(max_val * nums[i], nums[i]);
    min_val = min(min_val * nums[i], nums[i]);
    ans = max(ans, max_val);
  }

  return ans;
}

