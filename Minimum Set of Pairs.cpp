int solve(vector<int>& nums) {
  int n = size(nums);
  sort(begin(nums), end(nums));

  int res = INT_MAX;
  for (int i = 0; i + 3 < n; i++) {
    for (int j = i + 3; j < n; j++) {
      int target = nums[i] + nums[j];
      for (int l = i + 1, r = j - 1; l < r;) {
        int sm = nums[l] + nums[r];
        res = min(res, abs(sm - target));
        if (sm < target) {
          l++;
        } else {
          r--;
        }
      }
    }
  }
  return res;
}