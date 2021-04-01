int solve(vector<int>& nums) {
  int N = nums.size();
  for (int i = 0; i < N;) {
    if (nums[i] > 0 && nums[i] != i + 1 && nums[i] <= N && nums[i] != nums[nums[i] - 1]) {
      swap(nums[i], nums[nums[i] - 1]);
    } else {
      i++;
    }
  }

  for (int i = 0; i < N; i++) {
    if (nums[i] != i + 1) return i + 1;
  }
  return N + 1;
}