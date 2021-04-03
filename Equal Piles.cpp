int solve(vector<int>& nums) {
  int n = nums.size();
  sort(nums.begin(), nums.end());
  int c = 0;
  int cost = 0;
  for (int i = 1; i < n; i++)
  {
    if (nums[i] != nums[i - 1]) c++;
    cost += c;
  }
  return cost;
}