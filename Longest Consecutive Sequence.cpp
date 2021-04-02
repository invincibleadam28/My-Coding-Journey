int solve(vector<int>& nums)
{
  int n = nums.size();
  unordered_map<int, int> hmap;

  for (int x : nums)
  {
    hmap[x]++;
  }
  int l, r, c, ans = 0;
  for (int x : nums)
  {
    l = x - 1;
    r = x + 1;
    c = 1;

    while (hmap.find(l) != hmap.end() && hmap[l] > 0)
    {
      c++;
      hmap[l]--;
      l--;
    }
    while (hmap.find(r) != hmap.end() && hmap[r] > 0)
    {
      c++;
      hmap[r]--;
      r++;
    }
    ans = max(ans, c);
  }

  return ans;

}
