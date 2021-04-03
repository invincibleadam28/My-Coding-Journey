int solve(vector<int>& nums) {
  // subsequence may start at
  // positive or negative
  int pos = 0;
  int neg = 0;
  for (const int& num : nums)
    if (num < 0) {
      if (neg < pos + 1) neg = pos + 1;
    } else {
      if (pos < neg + 1) pos = neg + 1;
    }
  return max(neg, pos);
}