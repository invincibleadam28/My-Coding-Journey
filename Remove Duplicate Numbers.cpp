vector<int> solve(vector<int>& nums) {
  int n = nums.size();

  unordered_map<int, int> hmap;

  for (int i = 0; i < n; i++)
  {
    hmap[nums[i]]++;
  }
  int curr = 0;

  for (int i = 0; i < n; i++)
  {
    if (hmap[nums[i]] == 1)
    {
      nums[curr++] = nums[i];
    }
  }
  nums.resize(curr);

  return nums;
}