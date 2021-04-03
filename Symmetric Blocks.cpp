bool solve(vector<int>& nums) {
  int n = nums.size();
  int bal = 0;
  for (int i = 1; i <= n; i++) {
    bal += max(0, nums[i - 1] - i);
    bal -= min(i, nums[i - 1]) - (nums[i - 1] >= i);
  }
  return !bal;
}
