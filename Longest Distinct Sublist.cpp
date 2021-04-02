int solve(vector<int>& nums) {

  int n = nums.size();
  if (n <= 1) return n;
  unordered_map<int, int> hmap;

  int ans = 0;
  int i = 0, j = 0;

  while (i < n && j < n)
  {
    if (hmap.find(nums[j]) == hmap.end() || hmap[nums[j]] < i)
    {
      hmap[nums[j]] = j;
      ans = max(ans, j - i + 1);
    }
    else
    {
      ans = max(ans, j - i);
      i = hmap[nums[j]] + 1;
      hmap[nums[j]] = j;
    }
    j++;
  }


  return ans;

}
