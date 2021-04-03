int solve(vector<int>& nums, int target) {
  int n = nums.size();

  unordered_map<int, int> hmap;
  hmap[0] = 1;
  int sum = 0;
  int ans = 0;

  for (int i = 0; i < n; i++)
  {
    sum += nums[i];
    if (hmap.find(sum - target) != hmap.end())
      ans += hmap[sum - target];
    hmap[sum]++;
  }

  return ans;
}