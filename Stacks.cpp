int solve(vector<vector<int>>& stacks)
{
  unordered_map<int, int> hmap;
  int sum = 0;

  for (auto v : stacks)
  {
    sum = 0;
    for (auto x : v)
    {
      sum += x;
      hmap[sum]++;
    }
  }
  int ans = 0;

  for (auto x : hmap)
  {
    if (x.second >= stacks.size())
    {
      ans = max(ans, x.first);
    }
  }

  return ans;

}