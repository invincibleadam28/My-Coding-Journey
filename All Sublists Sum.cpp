int solve(vector<int>& nums) {
  int n = nums.size();
  int sum = 0;

  for (int i = 0; i < n; i++)
  {
    sum = (sum + (i + 1) * (n - i) * nums[i]) % (1000000000 + 7);
  }

  return sum;


}