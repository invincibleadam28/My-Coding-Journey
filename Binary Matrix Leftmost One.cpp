int bs(vector<int>& nums) {
  int lo = 0, hi = nums.size() - 1;
  while (lo <= hi) {
    int mid = lo + (hi - lo) / 2;
    if (nums[mid] == 0) {
      lo = mid + 1;
    } else if (nums[mid] == 1 && mid != lo) {
      hi = mid;
    } else {
      return mid;
    }
  }
  return -1;
}

int solve(vector<vector<int>>& matrix) {
  int minimum = INT_MAX;
  for (int i = 0; i < matrix.size(); i++) {
    int idx = bs(matrix[i]);
    if (idx != -1) minimum = min(minimum, idx);
  }
  return minimum == INT_MAX ? -1 : minimum;
}
