int solve(vector<int>& nums, int k) {
  sort(nums.begin(), nums.end());
  int l = 0, n = nums.size(), r = n - 1;
  int ans = 0;
  while (l <= r) {
    while (nums[l] + nums[r] > k && l <= r) r--;
    if (l <= r) ans += pow(2, r - l);
    l++;
  }
  return ans;
}
