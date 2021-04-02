int solve(vector<int>& nums) {
  int n = nums.size();
  unordered_map<int, int> ump;

  for (int i = 0; i < n; i++)
  {
    ump[nums[i] - i] += nums[i];
  }
  int maxi = INT_MIN;

  for (auto x : ump)
  {
    maxi = max(maxi, x.second);
  }

  return maxi;

}
