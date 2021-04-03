int solve(vector<int>& nums) {
  int n = nums.size();
  int sub[n];
  sub[n - 1] = nums[n - 1] - (n - 1);
  for (int i = n - 2; i >= 0; i--) {
    sub[i] = max(sub[i + 1], nums[i] - i);
  }
  int res = INT_MIN;
  for (int i = 0; i < n - 1; i++) {
    res = max(res, nums[i] + i + sub[i + 1]);
  }
  return res;
}